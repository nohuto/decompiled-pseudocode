/*
 * XREFs of LdrpFindDelayloadedMethod @ 0x1800CE938
 * Callers:
 *     LdrQueryOptionalDelayLoadedAPI @ 0x1800CE830 (LdrQueryOptionalDelayLoadedAPI.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x180032920 (RtlpImageDirectoryEntryToDataEx.c)
 *     LdrpFindDelayloadedMethodInDescriptor @ 0x1800CE9E4 (LdrpFindDelayloadedMethodInDescriptor.c)
 */

__int64 __fastcall LdrpFindDelayloadedMethod(unsigned __int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 DelayloadedMethodInDescriptor; // rsi
  NTSTATUS v7; // eax
  char *v8; // r15
  int v9; // edi
  unsigned int v10; // ebx
  unsigned int v12; // [rsp+80h] [rbp+18h] BYREF
  char *v13; // [rsp+88h] [rbp+20h] BYREF

  *a3 = 0LL;
  DelayloadedMethodInDescriptor = 0LL;
  v7 = RtlpImageDirectoryEntryToDataEx(a1, 1, 0xDu, &v12, &v13);
  v8 = v13;
  if ( v7 < 0 )
    v8 = 0LL;
  if ( v8 )
  {
    v9 = 0;
    v10 = v12 >> 5;
    if ( v12 >> 5 )
    {
      while ( 1 )
      {
        DelayloadedMethodInDescriptor = LdrpFindDelayloadedMethodInDescriptor(a1, &v8[32 * v9], a2);
        if ( DelayloadedMethodInDescriptor )
          break;
        if ( ++v9 >= v10 )
          return DelayloadedMethodInDescriptor;
      }
      *a3 = &v8[32 * v9];
    }
  }
  return DelayloadedMethodInDescriptor;
}
