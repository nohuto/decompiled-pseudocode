/*
 * XREFs of ?UpdateAttractionParameters@CursorAttraction@@AEAAXAEBUtagPOINT@@@Z @ 0x1801707A0
 * Callers:
 *     ?ApplyCursorAttraction@CursorAttraction@@QEAA?AUtagPOINT@@AEBU2@AEBUtagRECT@@@Z @ 0x1801703DC (-ApplyCursorAttraction@CursorAttraction@@QEAA-AUtagPOINT@@AEBU2@AEBUtagRECT@@@Z.c)
 * Callees:
 *     sqrtf_0 @ 0x18004A65B (sqrtf_0.c)
 *     operator__ @ 0x180170394 (operator__.c)
 */

void __fastcall CursorAttraction::UpdateAttractionParameters(struct tagPOINT *this, struct tagPOINT *a2)
{
  struct tagPOINT *v2; // r11
  LONG y; // r10d
  LONG v5; // r8d
  LONG x; // r10d
  LONG v7; // r8d
  _DWORD *v8; // r9
  _DWORD *v9; // r11
  float v10; // xmm7_4
  float v11; // xmm6_4
  float v12; // xmm7_4
  float v13; // xmm6_4
  float v14; // xmm0_4

  v2 = this + 2;
  this[2] = *a2;
  y = a2->y;
  if ( this->y > y || this[1].y < y )
  {
    v5 = this[1].y;
    if ( (int)abs32(y - this->y) < (int)abs32(y - v5) )
      v5 = this->y;
    this[2].y = v5;
  }
  x = a2->x;
  if ( this->x > a2->x || this[1].x < x )
  {
    v7 = this[1].x;
    if ( (int)abs32(x - this->x) < (int)abs32(x - v7) )
      v7 = this->x;
    v2->x = v7;
  }
  v10 = 0.0;
  v11 = 0.0;
  if ( operator__(v2, a2) )
  {
    v12 = (float)(*v9 - *v8);
    v13 = (float)(this[2].y - v8[1]);
    v14 = sqrtf_0((float)(v13 * v13) + (float)(v12 * v12));
    v11 = (float)(v13 / v14) * *(float *)&this[4].y;
    v10 = (float)(v12 / v14) * *(float *)&this[4].y;
  }
  *(float *)&this[3].x = v10;
  *(float *)&this[3].y = v11;
}
