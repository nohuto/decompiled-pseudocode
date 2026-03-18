/*
 * XREFs of ??$UnmarshalResourceArray@VCCompositionTextLine@@@CResource@@SAJPEBXIIW4MIL_RESOURCE_TYPE@@PEAIPEAPEAPEAVCCompositionTextLine@@PEAVCResourceTable@@_N@Z @ 0x180168A3C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800ADEEC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?UnmarshalResourceArray@CResource@@SAJPEBXIIW4MIL_RESOURCE_TYPE@@PEAIPEAPEAPEAV1@PEAVCResourceTable@@_N@Z @ 0x18004BC7C (-UnmarshalResourceArray@CResource@@SAJPEBXIIW4MIL_RESOURCE_TYPE@@PEAIPEAPEAPEAV1@PEAVCResourceTa.c)
 */

__int64 __fastcall CResource::UnmarshalResourceArray<CCompositionTextLine>(
        unsigned int *a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        unsigned int *a5,
        _QWORD *a6,
        __int64 a7)
{
  __int64 result; // rax
  void *v8; // [rsp+40h] [rbp-18h] BYREF

  result = CResource::UnmarshalResourceArray(a1, a2, a3, 0x29u, a5, &v8, a7, 0);
  *a6 = v8;
  return result;
}
