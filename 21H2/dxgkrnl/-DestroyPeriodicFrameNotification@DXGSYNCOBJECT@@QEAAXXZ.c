/*
 * XREFs of ?DestroyPeriodicFrameNotification@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C033F9B4
 * Callers:
 *     ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C019A330 (-Destroy@DXGSYNCOBJECT@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?DestroyPeriodicFrameNotification@BLTQUEUE@@QEAAJPEA_K@Z @ 0x1C03BBB50 (-DestroyPeriodicFrameNotification@BLTQUEUE@@QEAAJPEA_K@Z.c)
 */

void __fastcall DXGSYNCOBJECT::DestroyPeriodicFrameNotification(DXGSYNCOBJECT *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 21);
  if ( v2 )
  {
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 64) + 2800LL) + 624LL) + 8LL) + 944LL))();
    *((_QWORD *)this + 21) = 0LL;
  }
  else if ( *((_QWORD *)this + 23) )
  {
    BLTQUEUE::DestroyPeriodicFrameNotification(
      (BLTQUEUE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 22) + 2792LL) + 448LL) + 8LL)
                 + 2920LL * *((unsigned int *)this + 48)),
      (unsigned __int64 *)this + 23);
  }
}
