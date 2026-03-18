/*
 * XREFs of ?PanUnlockDisplayArea@@YGXPAUDHPDEV__@@PAU_RECTL@@@Z @ 0x1F69C2
 * Callers:
 *     <none>
 * Callees:
 *     ?vOrder@ERECTL@@QAEXXZ @ 0x4E19C (-vOrder@ERECTL@@QAEXXZ.c)
 *     ?bEmpty@ERECTL@@QBEHXZ @ 0x4F396 (-bEmpty@ERECTL@@QBEHXZ.c)
 *     ??XERECTL@@QAEAAV0@ABU_RECTL@@@Z @ 0x4F46A (--XERECTL@@QAEAAV0@ABU_RECTL@@@Z.c)
 *     ?ShadowUnLock@@YGXPAU_PANDEV@@@Z @ 0x1F6AAB (-ShadowUnLock@@YGXPAU_PANDEV@@@Z.c)
 */

void __userpurge PanUnlockDisplayArea(struct _PANDEV *a1@<ebx>, struct DHPDEV__ *a2, struct _RECTL *a3)
{
  int v3; // ecx
  ERECTL *v4; // ecx
  unsigned int v5; // ecx
  int v6; // edi
  int v7; // eax
  unsigned int v8; // ecx
  int v9; // ebx
  int v10; // edx
  int v11; // ebx
  struct DHPDEV__ *v12; // eax
  int v13; // ecx
  HSEMAPHORE *v14; // esi
  int v15; // edi
  int v17[4]; // [esp+8h] [ebp-28h] BYREF
  struct _RECTL v18; // [esp+18h] [ebp-18h] BYREF
  struct DHPDEV__ *v19; // [esp+28h] [ebp-8h]
  int v20; // [esp+2Ch] [ebp-4h]
  struct _RECTL *v21; // [esp+3Ch] [ebp+Ch]

  v18 = *a3;
  ERECTL::vOrder((ERECTL *)&v18);
  v17[0] = 0;
  v17[1] = 0;
  v3 = *((_DWORD *)a2 + 13);
  v17[2] = *(_DWORD *)(v3 + 16);
  v17[3] = *(_DWORD *)(v3 + 20);
  ERECTL::operator*=(&v18.left, v17);
  if ( !ERECTL::bEmpty(v4) )
  {
    v5 = *((_DWORD *)a2 + 101);
    v6 = v18.left / v5;
    v7 = v18.right / v5;
    v8 = *((_DWORD *)a2 + 102);
    v21 = (struct _RECTL *)v6;
    v20 = v7 + 1;
    v9 = v18.bottom / v8 + 1;
    v10 = v18.top / v8;
    if ( (int)(v18.top / v8) < v9 )
    {
      v11 = v9 - v10;
      v12 = a2 + 9 * v10 + v6 + 20;
      v13 = v20;
      v19 = v12;
      do
      {
        if ( v6 < v13 )
        {
          v14 = (HSEMAPHORE *)v12;
          v15 = v13 - (_DWORD)v21;
          do
          {
            if ( EngIsSemaphoreOwnedByCurrentThread(*v14) )
              EngReleaseSemaphore(*v14);
            ++v14;
            --v15;
          }
          while ( v15 );
          v12 = v19;
          v6 = (int)v21;
          v13 = v20;
        }
        v12 += 9;
        v19 = v12;
        --v11;
      }
      while ( v11 );
    }
    ShadowUnLock(a1);
  }
}
