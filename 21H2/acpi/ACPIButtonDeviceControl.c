/*
 * XREFs of ACPIButtonDeviceControl @ 0x1C002C680
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001928 (ACPIInternalGetDeviceExtension.c)
 *     ACPIButtonEvent @ 0x1C002C7AC (ACPIButtonEvent.c)
 */

__int64 __fastcall ACPIButtonDeviceControl(ULONG_PTR a1, __int64 a2)
{
  __int64 DeviceExtension; // rax
  __int64 v5; // rdx
  __int64 v6; // rsi
  KIRQL v7; // al
  KIRQL v8; // r8
  __int64 v9; // rax
  _QWORD *v10; // rbx
  _QWORD *v11; // rax
  unsigned int v12; // edi

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v5 = *(_QWORD *)(a2 + 184);
  v6 = 0LL;
  if ( *(_BYTE *)(a2 + 64) )
  {
    v12 = -1073741822;
    goto LABEL_12;
  }
  if ( *(_DWORD *)(v5 + 24) == 2703680 )
  {
    if ( *(_DWORD *)(v5 + 8) == 4 )
    {
      v12 = 0;
      **(_DWORD **)(a2 + 24) = *(_DWORD *)(DeviceExtension + 200);
      v6 = 4LL;
LABEL_11:
      *(_QWORD *)(a2 + 56) = v6;
LABEL_12:
      *(_DWORD *)(a2 + 48) = v12;
      IofCompleteRequest((PIRP)a2, 0);
      return v12;
    }
LABEL_13:
    v12 = -1073741820;
    goto LABEL_11;
  }
  if ( *(_DWORD *)(v5 + 24) != 2703684 )
  {
    v12 = -1073741637;
    goto LABEL_12;
  }
  if ( *(_DWORD *)(v5 + 8) != 4 )
    goto LABEL_13;
  v7 = KeAcquireSpinLockRaiseToDpc(&AcpiButtonLock);
  v8 = v7;
  _InterlockedExchange64((volatile __int64 *)(a2 + 104), (__int64)&ACPIButtonCancelRequest);
  if ( *(_BYTE *)(a2 + 68) && _InterlockedExchange64((volatile __int64 *)(a2 + 104), 0LL) )
  {
    KeReleaseSpinLock(&AcpiButtonLock, v7);
    v12 = -1073741536;
    goto LABEL_11;
  }
  v9 = *(_QWORD *)(a2 + 184);
  v10 = (_QWORD *)(a2 + 168);
  *(_BYTE *)(v9 + 3) |= 1u;
  v11 = (_QWORD *)qword_1C00815B8;
  if ( *(__int64 **)qword_1C00815B8 != &AcpiButtonList )
    __fastfail(3u);
  *v10 = &AcpiButtonList;
  v10[1] = v11;
  *v11 = v10;
  qword_1C00815B8 = (__int64)v10;
  KeReleaseSpinLock(&AcpiButtonLock, v8);
  return (unsigned int)ACPIButtonEvent(a1, 0LL);
}
