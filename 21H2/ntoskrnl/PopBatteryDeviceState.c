/*
 * XREFs of PopBatteryDeviceState @ 0x1408ED078
 * Callers:
 *     NtPowerInformation @ 0x14066AF10 (NtPowerInformation.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14026A224 (PopReleaseRwLock.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     RtlPrefixUnicodeString @ 0x1406DD340 (RtlPrefixUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x1406F0B70 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall PopBatteryDeviceState(wchar_t *a1, __int64 a2)
{
  wchar_t *Buffer; // rsi
  signed int v4; // ebx
  __int64 v5; // r8
  wchar_t *v6; // rax
  unsigned __int16 Length; // di
  unsigned __int16 MaximumLength; // r14
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v10; // rax
  __int64 v11; // rdi
  __m128i v12; // xmm0
  __int64 v13; // rbx
  __int128 v14; // xmm0
  UNICODE_STRING String2; // [rsp+20h] [rbp-20h] BYREF
  UNICODE_STRING v17; // [rsp+30h] [rbp-10h] BYREF

  Buffer = a1;
  v4 = 0;
  String2 = 0LL;
  if ( !a1 )
    goto LABEL_7;
  v5 = 0x7FFFLL;
  v6 = a1;
  do
  {
    if ( !*v6 )
      break;
    ++v6;
    --v5;
  }
  while ( v5 );
  v4 = v5 == 0 ? 0xC000000D : 0;
  if ( v5 )
  {
    Length = 2 * (v5 != 0 ? 0x7FFF - v5 : 0);
    String2.Buffer = a1;
    String2.Length = Length;
    MaximumLength = Length + 2;
    String2.MaximumLength = Length + 2;
  }
  else
  {
LABEL_7:
    Buffer = String2.Buffer;
    MaximumLength = String2.MaximumLength;
    Length = String2.Length;
  }
  if ( v4 >= 0 )
  {
    if ( Length > 8u
      && (RtlPrefixUnicodeString(&PopDevicePrefixNt, &String2, 0)
       || RtlPrefixUnicodeString(&PopDevicePrefixWin32, &String2, 0)) )
    {
      CurrentThread = KeGetCurrentThread();
      String2.Buffer = Buffer + 4;
      String2.Length = Length - 8;
      --CurrentThread->KernelApcDisable;
      String2.MaximumLength = MaximumLength - 8;
      ExAcquirePushLockSharedEx((ULONG_PTR)&PopPolicyDeviceLock, 0LL);
      v10 = KeGetCurrentThread();
      --v10->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)&PopCB, 0LL);
      v11 = qword_140C23C60;
      if ( (__int64 *)qword_140C23C60 == &qword_140C23C60 )
        goto LABEL_20;
      do
      {
        v12 = *(__m128i *)(v11 + 32);
        v13 = v11;
        *(_QWORD *)&v17.Length = *(_QWORD *)(v11 + 32);
        v17.Length -= 8;
        v17.MaximumLength -= 8;
        v17.Buffer = (wchar_t *)(_mm_srli_si128(v12, 8).m128i_u64[0] + 8);
        if ( RtlEqualUnicodeString(&String2, &v17, 1u) )
          break;
        v11 = *(_QWORD *)v11;
        v13 = 0LL;
      }
      while ( (__int64 *)v11 != &qword_140C23C60 );
      if ( !v13 )
      {
LABEL_20:
        v4 = -1073741772;
      }
      else if ( *(_DWORD *)(v13 + 104) == 3 )
      {
        *(_OWORD *)a2 = *(_OWORD *)(v13 + 112);
        *(_OWORD *)(a2 + 16) = *(_OWORD *)(v13 + 128);
        *(_DWORD *)(a2 + 32) = *(_DWORD *)(v13 + 144);
        v14 = *(_OWORD *)(v13 + 148);
        v4 = 0;
        *(_OWORD *)(a2 + 36) = v14;
      }
      else
      {
        v4 = -1073741661;
      }
      PopReleaseRwLock((ULONG_PTR)&PopCB);
      PopReleaseRwLock((ULONG_PTR)&PopPolicyDeviceLock);
    }
    else
    {
      return (unsigned int)-1073741773;
    }
  }
  return (unsigned int)v4;
}
