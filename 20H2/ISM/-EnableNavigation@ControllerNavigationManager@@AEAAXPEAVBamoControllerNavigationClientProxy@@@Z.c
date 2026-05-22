/*
 * XREFs of ?EnableNavigation@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationClientProxy@@@Z @ 0x18011CAB4
 * Callers:
 *     ?SetCurrentStateWithClient@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationClientProxy@@@Z @ 0x18011DC88 (-SetCurrentStateWithClient@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationClientP.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ?NavigationEnabled@ControllerNavigationManager@InputETW@@SAXUtagRECT@@UtagPOINT@@@Z @ 0x18011CC04 (-NavigationEnabled@ControllerNavigationManager@InputETW@@SAXUtagRECT@@UtagPOINT@@@Z.c)
 *     ?NavigationEnable@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@_N2@Z @ 0x180121050 (-NavigationEnable@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@_N2@Z.c)
 */

void __fastcall ControllerNavigationManager::EnableNavigation(
        ControllerNavigationManager *this,
        struct BamoControllerNavigationClientProxy *a2)
{
  struct BamoControllerNavigationClientProxy *v3; // rbx
  unsigned int v4; // ebp
  struct tagRECT v5; // xmm6
  struct tagPOINT *v6; // rax
  struct tagPOINT v7; // rdi
  _QWORD *v8; // rsi
  _QWORD *i; // rbx
  ControllerProcessor *v10; // rcx
  struct tagRECT v11; // [rsp+30h] [rbp-28h] BYREF

  v3 = a2;
  LOBYTE(a2) = 1;
  (*(void (__fastcall **)(char *, struct BamoControllerNavigationClientProxy *))(*((_QWORD *)this + 1) + 32LL))(
    (char *)this + 8,
    a2);
  v3 = (struct BamoControllerNavigationClientProxy *)((char *)v3 + 8);
  v4 = (*(__int64 (__fastcall **)(struct BamoControllerNavigationClientProxy *))(*(_QWORD *)v3 + 40LL))(v3);
  v5 = *(struct tagRECT *)(*(__int64 (__fastcall **)(struct BamoControllerNavigationClientProxy *))(*(_QWORD *)v3 + 48LL))(v3);
  v6 = (struct tagPOINT *)(*(__int64 (__fastcall **)(struct BamoControllerNavigationClientProxy *))(*(_QWORD *)v3 + 56LL))(v3);
  v11 = v5;
  v7 = *v6;
  InputETW::ControllerNavigationManager::NavigationEnabled(&v11, *v6);
  v8 = (_QWORD *)*((_QWORD *)this + 9);
  for ( i = (_QWORD *)*v8; i != v8; i = (_QWORD *)*i )
  {
    v10 = (ControllerProcessor *)i[3];
    v11 = v5;
    ControllerProcessor::NavigationEnable(v10, v4, &v11, v7, 1, 1);
  }
}
