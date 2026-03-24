/*
 * XREFs of ?FindCompositionFrame@CCompositionFrameCollection@@UEAAJ_KPEAPEAUICompositionFrame@@@Z @ 0x1C0013420
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionFrameCollection::FindCompositionFrame(
        CCompositionFrameCollection *this,
        __int64 a2,
        struct ICompositionFrame **a3)
{
  char *v3; // rbx
  unsigned int v7; // esi
  char *v8; // r12
  char *v9; // rbp
  struct ICompositionFrame *v10; // rdi

  v3 = (char *)this + 32;
  *a3 = 0LL;
  v7 = -1073741275;
  ExAcquirePushLockSharedEx((char *)this + 32, 0LL);
  v3[8] = 0;
  v8 = (char *)this + 16;
  v9 = (char *)*((_QWORD *)this + 3);
  if ( v9 != (char *)this + 16 )
  {
    while ( 1 )
    {
      v10 = (struct ICompositionFrame *)(v9 - 16);
      if ( (*(__int64 (__fastcall **)(_QWORD *))(*((_QWORD *)v9 - 2) + 72LL))((_QWORD *)v9 - 2) == a2 )
        break;
      v9 = (char *)*((_QWORD *)v9 + 1);
      if ( v9 == v8 )
        goto LABEL_4;
    }
    (**(void (__fastcall ***)(__int64))v10)((__int64)(v9 - 16));
    v7 = 0;
    *a3 = v10;
  }
LABEL_4:
  if ( v3[8] )
    ExReleasePushLockExclusiveEx(v3, 0LL);
  else
    ExReleasePushLockSharedEx(v3, 0LL);
  return v7;
}
