/*
 * XREFs of ?SavePointerInfo@ADAPTER_DISPLAY@@QEAAXIEHHHH@Z @ 0x1C001A5E8
 * Callers:
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C0130704 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ADAPTER_DISPLAY::SavePointerInfo(
        ADAPTER_DISPLAY *this,
        __int64 a2,
        char a3,
        int a4,
        int a5,
        int a6,
        int a7)
{
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rax

  v10 = (unsigned int)a2;
  if ( (unsigned int)a2 >= *((_DWORD *)this + 20) )
  {
    v12 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v12 + 24) = 5761LL;
    WdLogEvent5_WdAssertion(v12);
  }
  v11 = 3968 * v10;
  *(_BYTE *)(3968 * v10 + *((_QWORD *)this + 14) + 725) = a3;
  if ( a3 )
  {
    *(_DWORD *)(v11 + *((_QWORD *)this + 14) + 728) = a4;
    *(_DWORD *)(v11 + *((_QWORD *)this + 14) + 732) = a5;
    *(_DWORD *)(v11 + *((_QWORD *)this + 14) + 680) = a6;
    *(_DWORD *)(v11 + *((_QWORD *)this + 14) + 684) = a7;
  }
}
