/*
 * XREFs of ??0DXGPROCESSVM@@QEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@PEAVDXGPROCESS@@2@Z @ 0x1C00576A8
 * Callers:
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z @ 0x1C0189DE4 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z.c)
 * Callees:
 *     ?SetWin32kInterface@DXGPROCESS@@QEAAXQEBU_DXGKWIN32KENG_INTERFACE@@@Z @ 0x1C01626D0 (-SetWin32kInterface@DXGPROCESS@@QEAAXQEBU_DXGKWIN32KENG_INTERFACE@@@Z.c)
 *     ??0DXGPROCESS@@IEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@@Z @ 0x1C0189B78 (--0DXGPROCESS@@IEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@@Z.c)
 */

DXGPROCESSVM *__fastcall DXGPROCESSVM::DXGPROCESSVM(
        DXGPROCESSVM *this,
        struct DXGGLOBAL *a2,
        struct _EPROCESS *const a3,
        struct DXGPROCESS *a4,
        struct DXGPROCESS *a5)
{
  int v7; // edx

  DXGPROCESS::DXGPROCESS(this, a2, a3);
  *((_DWORD *)this + 106) |= 0x100u;
  v7 = *((_DWORD *)this + 106);
  *(_QWORD *)this = &DXGPROCESSVM::`vftable';
  *((_QWORD *)this + 80) = 0LL;
  *((_QWORD *)this + 81) = 0LL;
  *((_QWORD *)this + 76) = a4;
  *((_DWORD *)this + 106) = v7 & 0xFFFFFBFF | (*(_QWORD *)(*((_QWORD *)a4 + 76) + 272LL) != 0LL ? 0x400 : 0);
  *((_QWORD *)this + 77) = a5;
  DXGPROCESS::SetWin32kInterface(this, *((const struct _DXGKWIN32KENG_INTERFACE *const *)a4 + 11));
  return this;
}
