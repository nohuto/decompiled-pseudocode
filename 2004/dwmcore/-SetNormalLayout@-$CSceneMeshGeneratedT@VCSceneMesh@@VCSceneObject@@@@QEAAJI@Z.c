/*
 * XREFs of ?SetNormalLayout@?$CSceneMeshGeneratedT@VCSceneMesh@@VCSceneObject@@@@QEAAJI@Z @ 0x18017312C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A643C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSceneMeshGeneratedT<CSceneMesh,CSceneObject>::SetNormalLayout(__int64 *a1, int a2)
{
  __int64 v2; // rax

  if ( a2 != *((_DWORD *)a1 + 17) )
  {
    v2 = *a1;
    *((_DWORD *)a1 + 17) = a2;
    (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(v2 + 72))(a1, 0LL, 0LL);
  }
  return 0LL;
}
