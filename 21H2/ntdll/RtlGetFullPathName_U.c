/*
 * XREFs of RtlGetFullPathName_U @ 0x180081CF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetFullPathName_UEx @ 0x18001D800 (RtlGetFullPathName_UEx.c)
 */

__int64 __fastcall RtlGetFullPathName_U(__int64 a1, unsigned int a2, _WORD *a3, _QWORD *a4)
{
  int FullPathName_UEx; // eax
  unsigned int v5; // ecx
  _DWORD v7[6]; // [rsp+30h] [rbp-18h] BYREF

  FullPathName_UEx = RtlGetFullPathName_UEx(a1, a2, a3, a4, v7);
  v5 = 0;
  if ( FullPathName_UEx >= 0 )
    return v7[0];
  return v5;
}
