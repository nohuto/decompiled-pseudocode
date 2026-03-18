/*
 * XREFs of ??0DXGPROCESSVM@@QEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@PEAVDXGPROCESS@@2@Z @ 0x1C0046A28
 * Callers:
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z @ 0x1C011A908 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z.c)
 * Callees:
 *     ??0DXGPROCESS@@IEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@@Z @ 0x1C011AB5C (--0DXGPROCESS@@IEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@@Z.c)
 *     ?SetWin32kInterface@DXGPROCESS@@QEAAXQEBU_DXGKWIN32KENG_INTERFACE@@@Z @ 0x1C0156928 (-SetWin32kInterface@DXGPROCESS@@QEAAXQEBU_DXGKWIN32KENG_INTERFACE@@@Z.c)
 */

DXGPROCESSVM *__fastcall DXGPROCESSVM::DXGPROCESSVM(
        DXGPROCESSVM *this,
        struct DXGGLOBAL *a2,
        struct _EPROCESS *const a3,
        struct DXGPROCESS *a4,
        struct DXGPROCESS *a5)
{
  char v7; // dl

  DXGPROCESS::DXGPROCESS(this, a2, a3);
  *((_BYTE *)this + 347) |= 0x20u;
  v7 = *((_BYTE *)this + 347);
  *(_QWORD *)this = &DXGPROCESSVM::`vftable';
  *((_QWORD *)this + 66) = 0LL;
  *((_QWORD *)this + 67) = 0LL;
  *((_QWORD *)this + 62) = a4;
  *((_BYTE *)this + 347) = v7 & 0xBF | (*(_QWORD *)(*((_QWORD *)a4 + 62) + 232LL) != 0LL ? 0x40 : 0);
  *((_QWORD *)this + 63) = a5;
  DXGPROCESS::SetWin32kInterface(this, *((const struct _DXGKWIN32KENG_INTERFACE *const *)a4 + 11));
  return this;
}
