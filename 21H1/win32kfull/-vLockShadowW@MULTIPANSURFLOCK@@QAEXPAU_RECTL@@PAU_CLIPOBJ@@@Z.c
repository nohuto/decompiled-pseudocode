/*
 * XREFs of ?vLockShadowW@MULTIPANSURFLOCK@@QAEXPAU_RECTL@@PAU_CLIPOBJ@@@Z @ 0x1F7199
 * Callers:
 *     ??0MULTIPANSURFLOCK@@QAE@PAU_PANDEV@@PAPAU_SURFOBJ@@1PAU_RECTL@@2PAHPAU_CLIPOBJ@@@Z @ 0x1F53B5 (--0MULTIPANSURFLOCK@@QAE@PAU_PANDEV@@PAPAU_SURFOBJ@@1PAU_RECTL@@2PAHPAU_CLIPOBJ@@@Z.c)
 * Callees:
 *     ?vOrder@ERECTL@@QAEXXZ @ 0x4E19C (-vOrder@ERECTL@@QAEXXZ.c)
 *     ?bEmpty@ERECTL@@QBEHXZ @ 0x4F396 (-bEmpty@ERECTL@@QBEHXZ.c)
 *     ??XERECTL@@QAEAAV0@ABU_RECTL@@@Z @ 0x4F46A (--XERECTL@@QAEAAV0@ABU_RECTL@@@Z.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?vUnLockShadowWAndWait@MULTIPANSURFLOCK@@QAEXXZ @ 0x1F76C9 (-vUnLockShadowWAndWait@MULTIPANSURFLOCK@@QAEXXZ.c)
 */

void __thiscall MULTIPANSURFLOCK::vLockShadowW(MULTIPANSURFLOCK *this, struct _RECTL *a2, struct _CLIPOBJ *a3)
{
  LONG top; // esi
  LONG right; // esi
  int v6; // esi
  int v7; // ecx
  int v8; // eax
  int v9; // eax
  ERECTL *v10; // ecx
  int v11; // ecx
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  int v16; // edi
  int v17; // eax
  int v18; // esi
  struct _CLIPOBJ *v19; // edi
  struct _RECTL *v20; // esi
  int v21; // eax
  int v22; // eax
  char *v23; // ecx
  int i; // edx
  int v25; // edi
  int v26; // eax
  int v27; // eax
  int v28[4]; // [esp+Ch] [ebp-3Ch] BYREF
  struct _RECTL v29; // [esp+1Ch] [ebp-2Ch] BYREF
  int v30; // [esp+2Ch] [ebp-1Ch]
  int v31; // [esp+30h] [ebp-18h]
  char *v32; // [esp+34h] [ebp-14h]
  char *v33; // [esp+38h] [ebp-10h]
  int v34; // [esp+3Ch] [ebp-Ch]
  int v35; // [esp+40h] [ebp-8h]
  int v36; // [esp+44h] [ebp-4h]
  struct _RECTL *v37; // [esp+50h] [ebp+8h]
  struct _CLIPOBJ *v38; // [esp+54h] [ebp+Ch]

  memset(&v29, 0, sizeof(v29));
  if ( a3 && a3->iDComplexity )
  {
    v29.left = a3->rclBounds.left;
    if ( v29.left <= a2->left )
      v29.left = a2->left;
    top = a2->top;
    v29.top = a3->rclBounds.top;
    if ( v29.top <= top )
      v29.top = top;
    right = a2->right;
    v29.right = a3->rclBounds.right;
    if ( v29.right >= right )
      v29.right = right;
    if ( a3->rclBounds.bottom >= a2->bottom )
      v29.bottom = a2->bottom;
    else
      v29.bottom = a3->rclBounds.bottom;
  }
  else
  {
    v29 = *a2;
  }
  ERECTL::vOrder((ERECTL *)&v29);
  v6 = *((_DWORD *)this + 4);
  v7 = v6;
  if ( v6 )
  {
    v8 = *((_DWORD *)this + 4);
  }
  else
  {
    v7 = *((_DWORD *)this + 5);
    v8 = v7;
  }
  v9 = *(_DWORD *)(v8 + 52);
  v28[0] = 0;
  v28[1] = 0;
  v28[2] = *(_DWORD *)(v9 + 16);
  v28[3] = *(_DWORD *)(*(_DWORD *)(v7 + 52) + 20);
  ERECTL::operator*=(&v29.left, v28);
  if ( !ERECTL::bEmpty(v10) )
  {
    v11 = v6;
    if ( !v6 )
      v11 = *((_DWORD *)this + 5);
    v12 = v29.left / *(_DWORD *)(v11 + 404);
    v13 = v6;
    v37 = (struct _RECTL *)v12;
    if ( !v6 )
      v13 = *((_DWORD *)this + 5);
    v14 = v29.right / *(_DWORD *)(v13 + 404);
    v15 = v6;
    v16 = v14;
    if ( !v6 )
      v15 = *((_DWORD *)this + 5);
    v36 = v29.top / *(_DWORD *)(v15 + 408);
    if ( !v6 )
      v6 = *((_DWORD *)this + 5);
    v17 = v29.bottom / *(_DWORD *)(v6 + 408);
    *((_BYTE *)this + 25) = 1;
    v18 = v17 + 1;
    memset((char *)this + 107, 0, 0x51u);
    v19 = (struct _CLIPOBJ *)(v16 + 1);
    v30 = v18;
    v20 = v37;
    v38 = v19;
    v32 = (char *)this + 9 * v36 + 107;
    v31 = 4 * ((_DWORD)v37 + 9 * v36) + 80;
LABEL_25:
    v21 = *((_DWORD *)this + 4);
    if ( !v21 )
      v21 = *((_DWORD *)this + 5);
    KeWaitForSingleObject((PVOID)(*(_DWORD *)(v21 + 416) + 20), UserRequest, 0, 0, 0);
    v22 = v36;
    v23 = v32;
    for ( i = v31; ; i += 36 )
    {
      v34 = i;
      v33 = v23;
      v35 = v22;
      if ( v22 >= v30 )
        break;
      if ( (int)v37 < (int)v19 )
      {
        v25 = i;
        while ( 1 )
        {
          v26 = *((_DWORD *)this + 4);
          if ( !v26 )
            v26 = *((_DWORD *)this + 5);
          if ( !EngAcquireSemaphoreNoWait(*(HSEMAPHORE *)(v25 + v26)) )
            break;
          v23 = v33;
          v25 += 4;
          *((_BYTE *)&v20->left + (_DWORD)v33) = 1;
          v20 = (struct _RECTL *)((char *)v20 + 1);
          if ( (int)v20 >= (int)v38 )
          {
            v22 = v35;
            i = v34;
            v19 = v38;
            goto LABEL_36;
          }
        }
        MULTIPANSURFLOCK::vUnLockShadowWAndWait(this);
        memset((char *)this + 107, 0, 0x51u);
        v19 = v38;
        v20 = v37;
        goto LABEL_25;
      }
LABEL_36:
      v20 = v37;
      ++v22;
      v23 += 9;
    }
    v27 = *((_DWORD *)this + 4);
    if ( !v27 )
      v27 = *((_DWORD *)this + 5);
    KeReleaseMutex((PRKMUTEX)(*(_DWORD *)(v27 + 416) + 20), 0);
  }
}
