/*
 * XREFs of ?DrawSonar@@YGXPAUHDC__@@@Z @ 0x1532D7
 * Callers:
 *     _zzzAnimateFade@0 @ 0x153DEC (_zzzAnimateFade@0.c)
 *     _zzzStartSonar@0 @ 0x15406B (_zzzStartSonar@0.c)
 * Callees:
 *     _FillRect@12 @ 0x7226C (_FillRect@12.c)
 *     _GreCreatePen@16 @ 0xA9084 (_GreCreatePen@16.c)
 *     _NtGdiEllipse@20 @ 0x200B61 (_NtGdiEllipse@20.c)
 */

void __thiscall DrawSonar(void *this)
{
  void *v1; // esi
  HDC SolidBrush; // eax
  HDC v3; // ebx
  int Pen; // eax
  int v5; // eax
  int v6; // edi
  const RECT *v7; // [esp+0h] [ebp-20h]
  HBRUSH v8; // [esp+4h] [ebp-1Ch]
  int v9; // [esp+Ch] [ebp-14h]
  int v10; // [esp+10h] [ebp-10h]
  int v11; // [esp+14h] [ebp-Ch]
  HDC v13; // [esp+1Ch] [ebp-4h]

  v1 = this;
  SolidBrush = (HDC)GreCreateSolidBrush(16711935);
  v3 = SolidBrush;
  v13 = SolidBrush;
  if ( SolidBrush )
  {
    FillRect(SolidBrush, v7, v8);
    Pen = GreCreatePen(0, 0, 0xFFFFFF, 0);
    v9 = Pen;
    if ( Pen )
    {
      v10 = GreSelectPen(v1, Pen);
      v5 = GreCreateSolidBrush(8421504);
      v11 = v5;
      if ( v5 )
      {
        v6 = GreSelectBrush(v1, v5);
        v1 = this;
        NtGdiEllipse(this, 100 - giSonarRadius, 100 - giSonarRadius, giSonarRadius + 100, giSonarRadius + 100);
        GreSelectBrush(this, v13);
        NtGdiEllipse(this, 104 - giSonarRadius, 104 - giSonarRadius, giSonarRadius + 96, giSonarRadius + 96);
        GreSelectBrush(this, v6);
        GreDeleteObject(v11);
        v3 = v13;
      }
      GreSelectPen(v1, v10);
      GreDeleteObject(v9);
    }
    GreDeleteObject(v3);
  }
}
