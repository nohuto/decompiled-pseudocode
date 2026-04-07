/*
 * XREFs of ?Scale2D@CThumbnailAnimatedVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z @ 0x1800B7670
 * Callers:
 *     <none>
 * Callees:
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x18002A918 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?RoundToNearestInt@@YAHM@Z @ 0x18002C028 (-RoundToNearestInt@@YAHM@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CThumbnailAnimatedVisual::Scale2D(struct tagPOINT *this, const struct TA_TRANSFORM_2D *a2)
{
  int v2; // ebx
  int v3; // eax
  int v6; // ebp
  LONG y; // esi
  int v8; // ecx
  int v9; // eax
  int v10; // esi
  int v12; // [rsp+40h] [rbp+8h] BYREF
  int v13; // [rsp+44h] [rbp+Ch]
  struct tagPOINT v14; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  v3 = 0;
  if ( this[2].x - this[1].x >= 0 )
    v3 = this[2].x - this[1].x;
  v6 = RoundToNearestInt((float)v3 * *((float *)a2 + 5));
  y = this[1].y;
  if ( this[2].y - y >= 0 )
    v2 = this[2].y - y;
  v8 = RoundToNearestInt((float)v2 * *((float *)a2 + 6));
  v12 = v6;
  v9 = this[2].x - v6;
  v13 = v8;
  v10 = this[2].y + y - v8;
  v14.x = this[8].y + (this[1].x + v9) / 2;
  v14.y = this[9].x + v10 / 2;
  (*(void (__fastcall **)(struct tagPOINT *, int *))(*(_QWORD *)&this[-35] + 96LL))(this - 35, &v12);
  CVisual::SetOffset(this - 35, &v14);
  (*(void (__fastcall **)(struct tagPOINT *, __int64))(*(_QWORD *)&this[-35] + 24LL))(this - 35, 4096LL);
  return 0LL;
}
