/*
 * XREFs of IopDeviceRemovalForResetComplete @ 0x1408A0870
 * Callers:
 *     <none>
 * Callees:
 *     KiSetTimerEx @ 0x1402814E0 (KiSetTimerEx.c)
 *     RtlUnicodeStringValidateDestWorker @ 0x14036F1D0 (RtlUnicodeStringValidateDestWorker.c)
 *     McTemplateK0hzr0qqhzr4_EtwWriteTransfer @ 0x14050CEB0 (McTemplateK0hzr0qqhzr4_EtwWriteTransfer.c)
 *     IopFreeResetRemovalContext @ 0x1408A0A30 (IopFreeResetRemovalContext.c)
 *     PnpTraceDeviceRemovalForResetComplete @ 0x1408B19A0 (PnpTraceDeviceRemovalForResetComplete.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopDeviceRemovalForResetComplete(char *P, __int64 a2, __int64 a3, size_t *a4)
{
  int v5; // edi
  __int64 v6; // rax
  __int64 v7; // r10
  __int64 v8; // rax
  size_t v9; // r9
  const wchar_t *v10; // rdx
  __int64 v11; // r8
  __int16 v12; // cx
  signed __int64 v13; // r10
  size_t cchMax; // [rsp+20h] [rbp-38h]
  ULONG dwFlags; // [rsp+28h] [rbp-30h]
  size_t pcchDest; // [rsp+60h] [rbp+8h] BYREF
  wchar_t *ppszDest; // [rsp+68h] [rbp+10h] BYREF

  if ( !P )
    __fastfail(5u);
  v5 = *((_DWORD *)P + 41);
  if ( v5 >= 0 || !*((_DWORD *)P + 40) )
  {
    v6 = *((_QWORD *)P + 23);
    v7 = v6 ? *(_QWORD *)(*(_QWORD *)(v6 + 312) + 40LL) : 0LL;
    if ( (byte_140C1327B & 8) != 0 )
    {
      v8 = *((_QWORD *)P + 21);
      McTemplateK0hzr0qqhzr4_EtwWriteTransfer(
        *(_QWORD *)(v8 + 56),
        *(_QWORD *)(v8 + 48),
        **(_WORD **)(v8 + 56) >> 1,
        *(_WORD *)(v7 + 40) >> 1,
        *(_QWORD *)(v7 + 48),
        v5,
        **(_DWORD **)(v8 + 48),
        **(_WORD **)(v8 + 56) >> 1,
        *(_QWORD *)(*(_QWORD *)(v8 + 56) + 8LL));
    }
  }
  if ( v5 >= 0 || *((_DWORD *)P + 48) == 13 || *((_DWORD *)P + 44) >= (unsigned int)PnpResetMaximumRetryAttempts )
  {
    PnpTraceDeviceRemovalForResetComplete(P);
    return IopFreeResetRemovalContext(P);
  }
  else
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)P + 21) + 64LL), 0xFFFFFFFF) == 1 )
      ExFreePoolWithTag(*((PVOID *)P + 21), 0x4B706E50u);
    *((_DWORD *)P + 40) = v5;
    *((_QWORD *)P + 21) = 0LL;
    *((_DWORD *)P + 48) = 0;
    ppszDest = 0LL;
    pcchDest = 0LL;
    if ( RtlUnicodeStringValidateDestWorker((PCUNICODE_STRING)(P + 200), &ppszDest, &pcchDest, a4, cchMax, dwFlags) >= 0 )
    {
      v9 = pcchDest;
      v10 = &word_1407D7CE0;
      v11 = 0x7FFFLL;
      v12 = 0;
      if ( pcchDest )
      {
        v13 = (char *)ppszDest - (char *)&word_1407D7CE0;
        do
        {
          if ( !v11 )
            break;
          if ( !*v10 )
            break;
          *(const wchar_t *)((char *)v10 + v13) = *v10;
          --v11;
          ++v10;
          ++v12;
        }
        while ( v11 + v9 - 0x7FFF );
      }
      *((_WORD *)P + 100) = 2 * v12;
    }
    ++*((_DWORD *)P + 44);
    return KiSetTimerEx((__int64)P, PnpResetRetryInterval, 0, 0, (__int64)(P + 64));
  }
}
