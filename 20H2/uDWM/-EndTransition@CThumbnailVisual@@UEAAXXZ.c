/*
 * XREFs of ?EndTransition@CThumbnailVisual@@UEAAXXZ @ 0x1800936B0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x1800114E0 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017394 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x1800201C0 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x18002A918 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CThumbnailVisual::EndTransition(CThumbnailVisual *this)
{
  struct tagPOINT *v2; // rcx
  _DWORD *v3; // rax
  int v4; // edx
  int v5; // ecx
  LONG v6; // eax
  LONG v7; // eax
  __int64 v8; // rax
  CBaseObject *v9; // rcx
  struct tagPOINT v10; // [rsp+30h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 473) )
  {
    v2 = (struct tagPOINT *)*((_QWORD *)this + 46);
    if ( v2 )
    {
      v10 = v2[5];
      CVisual::SetOffset((struct tagPOINT *)this, &v10);
      v3 = (_DWORD *)*((_QWORD *)this + 46);
      v4 = v3[13] - v3[11];
      v5 = v3[12] - v3[10];
      v6 = 0;
      if ( v5 >= 0 )
        v6 = v5;
      v10.x = v6;
      v7 = 0;
      if ( v4 >= 0 )
        v7 = v4;
      v10.y = v7;
      (*(void (__fastcall **)(CThumbnailVisual *, struct tagPOINT *))(*(_QWORD *)this + 96LL))(this, &v10);
      if ( !*((_BYTE *)this + 356) )
      {
        v8 = *((_QWORD *)this + 46);
        if ( (*(_BYTE *)(v8 + 36) & 4) != 0 )
          CVisual::SetOpacity(this, (double)*(unsigned __int8 *)(v8 + 72) / 255.0);
      }
      CThumbnailVisual::SetDirtyFlags(this, 4096);
    }
  }
  v9 = (CBaseObject *)*((_QWORD *)this + 58);
  if ( v9 )
  {
    CBaseObject::Release(v9);
    *((_QWORD *)this + 58) = 0LL;
  }
  CThumbnailVisual::SetDirtyFlags(this, 0x8000);
  *((_BYTE *)this + 473) = 0;
}
