/*
 * XREFs of ?ProcessPTPMouseInput@CHidInput@@QEAAXPEAXPEAU_MOUSE_INPUT_DATA@@_K2K@Z @ 0x1C01A5710
 * Callers:
 *     <none>
 * Callees:
 *     ?SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z @ 0x1C0023C90 (-SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z.c)
 */

void __fastcall CHidInput::ProcessPTPMouseInput(
        CHidInput *this,
        void *a2,
        struct _MOUSE_INPUT_DATA *a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  __int64 v6; // xmm1_8

  *((_QWORD *)this + 162) = a2;
  *(_OWORD *)((char *)this + 1304) = *(_OWORD *)&a3->UnitId;
  v6 = *(_QWORD *)&a3->LastY;
  *((_QWORD *)this + 167) = a5;
  *((_DWORD *)this + 336) = a6;
  *((_QWORD *)this + 165) = v6;
  *((_QWORD *)this + 166) = a4;
  CRIMBase::SensorDoWorkAndWait((__int64)this, 13LL, (__int64)a3, a4);
}
