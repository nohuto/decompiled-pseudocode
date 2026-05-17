/*
 * XREFs of RtlQueryProcessModuleInformation @ 0x1800D8410
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x1800D78B0 (RtlQueryProcessDebugInformation.c)
 * Callees:
 *     LdrQueryProcessModuleInformationEx @ 0x180001458 (LdrQueryProcessModuleInformationEx.c)
 *     memset @ 0x1800A4780 (memset.c)
 *     LdrQueryProcessModuleInformationEx2 @ 0x1800CE2B8 (LdrQueryProcessModuleInformationEx2.c)
 *     RtlpCommitQueryDebugInfo @ 0x1800D8A38 (RtlpCommitQueryDebugInfo.c)
 *     RtlpDeCommitQueryDebugInfo @ 0x1800D8C8C (RtlpDeCommitQueryDebugInfo.c)
 */

__int64 __fastcall RtlQueryProcessModuleInformation(_QWORD *a1, unsigned int a2, __int64 a3)
{
  unsigned __int64 v5; // rdi
  int v6; // r15d
  unsigned int ProcessModuleInformationEx2; // eax
  unsigned int v8; // r10d
  _WORD *DebugInfo; // rax
  _WORD *v10; // rbx
  int v11; // eax
  unsigned int v13; // [rsp+50h] [rbp+8h] BYREF
  size_t Size; // [rsp+58h] [rbp+10h] BYREF

  v5 = (a1 == 0LL ? 2 : 0) | (unsigned __int64)((a2 >> 6) & 1);
  v6 = a2 & 0x100;
  if ( (a2 & 0x100) != 0 )
    ProcessModuleInformationEx2 = LdrQueryProcessModuleInformationEx2(a1, v5, 0LL, 0, (unsigned int *)&Size);
  else
    ProcessModuleInformationEx2 = LdrQueryProcessModuleInformationEx(a1, v5, 0LL, 0, (unsigned int *)&Size);
  v8 = ProcessModuleInformationEx2;
  if ( ProcessModuleInformationEx2 == -1073741820 )
  {
    DebugInfo = (_WORD *)RtlpCommitQueryDebugInfo(a3, (unsigned int)Size);
    v10 = DebugInfo;
    if ( DebugInfo )
    {
      memset(DebugInfo, 0, (unsigned int)Size);
      if ( v6 )
        v11 = LdrQueryProcessModuleInformationEx2(a1, v5, v10, Size, &v13);
      else
        v11 = LdrQueryProcessModuleInformationEx(a1, v5, v10, Size, &v13);
      if ( v11 >= 0 )
      {
        *(_QWORD *)(a3 + 96) = v10;
        return 0LL;
      }
      RtlpDeCommitQueryDebugInfo(a3, v10, (unsigned int)Size);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return v8;
}
