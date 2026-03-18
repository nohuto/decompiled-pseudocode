/*
 * XREFs of ?SetTangentLayout@?$CSceneMeshGeneratedT@VCSceneMesh@@VCSceneObject@@@@QEAAJI@Z @ 0x1801730C0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800ADEEC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSceneMeshGeneratedT<CSceneMesh,CSceneObject>::SetTangentLayout(__int64 *a1, int a2)
{
  __int64 v2; // rax

  if ( a2 != *((_DWORD *)a1 + 21) )
  {
    v2 = *a1;
    *((_DWORD *)a1 + 21) = a2;
    (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(v2 + 72))(a1, 0LL, 0LL);
  }
  return 0LL;
}
