/*
 * XREFs of ?CreateDevice@DockDeviceCollection@@MEAAJPEAX0KKPEAPEAVRIMDevice@@@Z @ 0x18009BDD0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18003C460 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18003CA18 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall DockDeviceCollection::CreateDevice(
        DockDeviceCollection *this,
        void *a2,
        void *a3,
        int a4,
        unsigned int a5,
        struct RIMDevice **a6)
{
  _DWORD *v10; // [rsp+20h] [rbp-18h]

  v10 = operator new(0x80uLL);
  v10[10] = a5;
  *((_QWORD *)v10 + 1) = a2;
  *((_QWORD *)v10 + 2) = a3;
  v10[6] = a4;
  *((_QWORD *)v10 + 4) = 0LL;
  *((_QWORD *)v10 + 6) = 0LL;
  v10[14] = 0;
  memset_0(v10 + 15, 0, 0x40uLL);
  *(_QWORD *)v10 = &DockDevice::`vftable';
  *a6 = (struct RIMDevice *)v10;
  return 0LL;
}
