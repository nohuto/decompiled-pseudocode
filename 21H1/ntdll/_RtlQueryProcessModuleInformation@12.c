/*
 * XREFs of _RtlQueryProcessModuleInformation@12 @ 0x4B337478
 * Callers:
 *     _RtlQueryProcessDebugInformation@12 @ 0x4B336B50 (_RtlQueryProcessDebugInformation@12.c)
 * Callees:
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _LdrQueryProcessModuleInformationEx2@20 @ 0x4B32EAC0 (_LdrQueryProcessModuleInformationEx2@20.c)
 *     _LdrQueryProcessModuleInformationEx@20 @ 0x4B32ED46 (_LdrQueryProcessModuleInformationEx@20.c)
 *     _RtlpCommitQueryDebugInfo@8 @ 0x4B3378A8 (_RtlpCommitQueryDebugInfo@8.c)
 *     _RtlpDeCommitQueryDebugInfo@12 @ 0x4B3379F5 (_RtlpDeCommitQueryDebugInfo@12.c)
 */

int __fastcall RtlQueryProcessModuleInformation(_DWORD *a1, unsigned int a2, int a3)
{
  int v3; // esi
  int v4; // eax
  int v5; // edi
  _WORD *DebugInfo; // eax
  _WORD *v7; // ebx
  int ProcessModuleInformationEx2; // eax
  int v10; // [esp+0h] [ebp-1Ch]
  int v11; // [esp+4h] [ebp-18h]
  int v12; // [esp+8h] [ebp-14h]
  int v13; // [esp+Ch] [ebp-10h] BYREF
  int v14; // [esp+10h] [ebp-Ch]
  _DWORD *v15; // [esp+14h] [ebp-8h]
  size_t Size; // [esp+18h] [ebp-4h] BYREF

  v15 = a1;
  v3 = (a2 >> 6) & 1 | (a1 != 0 ? 0 : 2);
  v14 = a2 & 0x100;
  if ( (a2 & 0x100) != 0 )
    v4 = LdrQueryProcessModuleInformationEx2(a1, v3, 0, 0, &Size, v10, v11);
  else
    v4 = LdrQueryProcessModuleInformationEx(a1, v3, 0, 0, &Size, v10, v11);
  v5 = v4;
  if ( v4 == -1073741820 )
  {
    DebugInfo = (_WORD *)RtlpCommitQueryDebugInfo(a3, Size);
    v7 = DebugInfo;
    if ( DebugInfo )
    {
      memset(DebugInfo, 0, Size);
      if ( v14 )
        ProcessModuleInformationEx2 = LdrQueryProcessModuleInformationEx2(
                                        v15,
                                        v3,
                                        v7,
                                        Size,
                                        (unsigned int *)&v13,
                                        v12,
                                        v13);
      else
        ProcessModuleInformationEx2 = LdrQueryProcessModuleInformationEx(
                                        v15,
                                        v3,
                                        v7,
                                        Size,
                                        (unsigned int *)&v13,
                                        v12,
                                        v13);
      v5 = ProcessModuleInformationEx2;
      if ( ProcessModuleInformationEx2 >= 0 )
      {
        *(_DWORD *)(a3 + 48) = v7;
        return 0;
      }
      RtlpDeCommitQueryDebugInfo(Size);
    }
    else
    {
      return -1073741801;
    }
  }
  return v5;
}
