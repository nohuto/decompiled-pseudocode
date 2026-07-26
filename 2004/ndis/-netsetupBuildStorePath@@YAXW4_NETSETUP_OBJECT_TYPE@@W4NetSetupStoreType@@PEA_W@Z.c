/*
 * XREFs of ?netsetupBuildStorePath@@YAXW4_NETSETUP_OBJECT_TYPE@@W4NetSetupStoreType@@PEA_W@Z @ 0x1C01089B8
 * Callers:
 *     netsetupEnumerateObjectIds__lambda_86c1c4c730e7c498c85e738815d56adf___ @ 0x1C0108740 (netsetupEnumerateObjectIds__lambda_86c1c4c730e7c498c85e738815d56adf___.c)
 *     ??$netsetupEnumerateObjectIds@P6AJAEBU_GUID@@@Z@@YAJW4_NETSETUP_OBJECT_TYPE@@W4NetSetupStoreType@@P6AJAEBU_GUID@@@Z@Z @ 0x1C012367C (--$netsetupEnumerateObjectIds@P6AJAEBU_GUID@@@Z@@YAJW4_NETSETUP_OBJECT_TYPE@@W4NetSetupStoreType.c)
 * Callees:
 *     netsetupGetPathForObjectType @ 0x1C0102220 (netsetupGetPathForObjectType.c)
 */

void __fastcall netsetupBuildStorePath(int a1, enum NetSetupStoreType a2, wchar_t *a3)
{
  const wchar_t *PathForObjectType; // rax
  wchar_t *v4; // r10

  if ( a2 )
  {
    if ( a2 == Mutable )
      swprintf_s(a3, 0x100uLL, L"\\Registry\\Machine\\DEVICES\\Networking\\NetAdapters");
  }
  else
  {
    PathForObjectType = netsetupGetPathForObjectType(a1);
    swprintf_s(
      v4,
      0x100uLL,
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\%ws",
      PathForObjectType);
  }
}
