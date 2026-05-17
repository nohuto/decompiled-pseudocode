/*
 * XREFs of TpBindFileToDirect @ 0x180075D98
 * Callers:
 *     TpAllocIoCompletion @ 0x180075BA0 (TpAllocIoCompletion.c)
 *     RtlpTpIoAlloc @ 0x180112D9C (RtlpTpIoAlloc.c)
 *     RtlpTpIoLookup @ 0x180113354 (RtlpTpIoLookup.c)
 * Callees:
 *     TpAdjustBindingCount @ 0x180010A00 (TpAdjustBindingCount.c)
 *     ZwSetInformationFile @ 0x18009D2F0 (ZwSetInformationFile.c)
 *     TppRaiseInvalidParameter @ 0x18011212C (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpBindFileToDirect(__int64 a1, __int64 a2, _PEB_LDR_DATA *Ldr, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 result; // rax
  _QWORD v7[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+40h] [rbp-18h] BYREF

  v4 = (__int64)Ldr;
  if ( a1 && a2 && Ldr && (Ldr = NtCurrentPeb()->Ldr, !Ldr->ShutdownInProgress) )
  {
    v5 = *(_QWORD *)(v4 + 64);
    v7[1] = a2;
    v7[0] = v5;
    result = ZwSetInformationFile(a1, &v8, v7, 16LL, 30);
    if ( (int)result >= 0 )
    {
      TpAdjustBindingCount(v4, 1u);
      return 0LL;
    }
  }
  else
  {
    TppRaiseInvalidParameter(a1, a2, Ldr, a4);
    return 3221225485LL;
  }
  return result;
}
