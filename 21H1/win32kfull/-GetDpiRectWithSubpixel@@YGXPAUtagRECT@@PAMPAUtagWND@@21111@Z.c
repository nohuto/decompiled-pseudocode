/*
 * XREFs of ?GetDpiRectWithSubpixel@@YGXPAUtagRECT@@PAMPAUtagWND@@21111@Z @ 0x14FCA4
 * Callers:
 *     _DpiRectContainsRectWithSubpixel@24 @ 0x150EDA (_DpiRectContainsRectWithSubpixel@24.c)
 *     _DpiRectIntersectsRectWithSubpixel@24 @ 0x150F7B (_DpiRectIntersectsRectWithSubpixel@24.c)
 * Callees:
 *     ?Save@CSmartFloatingSave@@QAEJXZ @ 0x99D5C (-Save@CSmartFloatingSave@@QAEJXZ.c)
 *     _LogicalToPhysicalInPlaceRectWithSubpixel@12 @ 0x9B5AE (_LogicalToPhysicalInPlaceRectWithSubpixel@12.c)
 *     _PhysicalToLogicalInPlaceRectWithSubpixel@12 @ 0x9B600 (_PhysicalToLogicalInPlaceRectWithSubpixel@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _ScaleDpiOffsetWithSubpixel@16 @ 0x151870 (_ScaleDpiOffsetWithSubpixel@16.c)
 */

void __userpurge GetDpiRectWithSubpixel(
        float *a1@<edx>,
        int *a2@<ecx>,
        struct tagRECT *a3,
        float *a4,
        struct tagWND *a5,
        struct tagWND *a6,
        float *a7,
        float *a8,
        float *a9,
        float *a10)
{
  int v10; // esi
  char v11; // bl
  float *v12; // eax
  float *v13; // ecx
  int v14; // [esp+10h] [ebp-60h] BYREF
  int v15; // [esp+14h] [ebp-5Ch]
  int v16; // [esp+18h] [ebp-58h]
  int v17; // [esp+1Ch] [ebp-54h]
  int v18; // [esp+20h] [ebp-50h] BYREF
  int v19; // [esp+24h] [ebp-4Ch]
  float v20; // [esp+28h] [ebp-48h]
  float v21; // [esp+2Ch] [ebp-44h]
  float v22; // [esp+30h] [ebp-40h]
  int v23; // [esp+34h] [ebp-3Ch]
  struct _KFLOATING_SAVE FloatSave; // [esp+38h] [ebp-38h] BYREF
  char v25; // [esp+58h] [ebp-18h]
  float v26; // [esp+5Ch] [ebp-14h] BYREF
  float v27; // [esp+60h] [ebp-10h]
  float v28; // [esp+64h] [ebp-Ch] BYREF
  float v29; // [esp+68h] [ebp-8h]

  v23 = (int)a4;
  v22 = *(float *)&a5;
  v14 = *a2;
  v21 = *(float *)&a6;
  v20 = *(float *)&a7;
  v15 = a2[1];
  v16 = a2[2];
  v17 = a2[3];
  v18 = v16 - v14;
  v19 = v17 - v15;
  v26 = 0.0;
  v27 = 0.0;
  v28 = 0.0;
  v29 = 0.0;
  if ( a1 )
  {
    v26 = *a1;
    v27 = a1[1];
    v28 = a1[2];
    v29 = a1[3];
  }
  if ( a3 )
  {
    v10 = v23;
    if ( *(float *)&v23 != 0.0 && a3 != (struct tagRECT *)v23 )
    {
      LogicalToPhysicalInPlaceRectWithSubpixel(v23, &v14, (int)&v26);
      PhysicalToLogicalInPlaceRectWithSubpixel((int)a3, &v14, (int)&v26);
      ScaleDpiOffsetWithSubpixel(&v18, &v28, a3, v10);
    }
  }
  v11 = 0;
  v25 = 0;
  if ( CSmartFloatingSave::Save(&FloatSave) < 0 )
  {
    v11 = v25;
  }
  else
  {
    v12 = (float *)LODWORD(v22);
    v13 = (float *)LODWORD(v21);
    *(float *)&v23 = (float)v14;
    *(float *)LODWORD(v22) = *(float *)&v23 + v26;
    v22 = (float)v15;
    *v13 = v22 + v27;
    v21 = (float)v18;
    *(float *)LODWORD(v20) = v21 + *v12 + v28;
    v20 = (float)v19;
    *a8 = v20 + *v13 + v29;
    KeRestoreFloatingPointState(&FloatSave);
    v25 = 0;
  }
  if ( v11 )
    KeRestoreFloatingPointState(&FloatSave);
}
