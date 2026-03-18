/*
 * XREFs of ?vLockShadow@PANSURFLOCK@@QAEXPAU_RECTL@@PAU_CLIPOBJ@@H@Z @ 0x1F6FC9
 * Callers:
 *     ??0PANSURFLOCK@@QAE@PAU_PANDEV@@PAPAU_SURFOBJ@@PAU_RECTL@@PAHPAU_CLIPOBJ@@@Z @ 0x1F55A2 (--0PANSURFLOCK@@QAE@PAU_PANDEV@@PAPAU_SURFOBJ@@PAU_RECTL@@PAHPAU_CLIPOBJ@@@Z.c)
 *     ?PanSynchronize@@YGXPAUDHPDEV__@@PAU_RECTL@@@Z @ 0x1F6656 (-PanSynchronize@@YGXPAUDHPDEV__@@PAU_RECTL@@@Z.c)
 * Callees:
 *     ?vOrder@ERECTL@@QAEXXZ @ 0x4E19C (-vOrder@ERECTL@@QAEXXZ.c)
 *     ?bEmpty@ERECTL@@QBEHXZ @ 0x4F396 (-bEmpty@ERECTL@@QBEHXZ.c)
 *     ??XERECTL@@QAEAAV0@ABU_RECTL@@@Z @ 0x4F46A (--XERECTL@@QAEAAV0@ABU_RECTL@@@Z.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?vUnLockShadowAndWait@PANSURFLOCK@@QAEXXZ @ 0x1F75D5 (-vUnLockShadowAndWait@PANSURFLOCK@@QAEXXZ.c)
 */

void __thiscall PANSURFLOCK::vLockShadow(PANSURFLOCK *this, struct _RECTL *a2, struct _CLIPOBJ *a3, int a4)
{
  LONG top; // esi
  LONG right; // esi
  int v7; // eax
  int v8; // ecx
  int v9; // ecx
  unsigned int v10; // esi
  unsigned int v11; // ecx
  int v12; // eax
  int v13; // esi
  struct _CLIPOBJ *v14; // edi
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  char *v18; // ecx
  int i; // edx
  int v20; // edi
  int v21; // eax
  HSEMAPHORE v22; // [esp-4h] [ebp-50h]
  int v23[4]; // [esp+Ch] [ebp-40h] BYREF
  struct _RECTL v24; // [esp+1Ch] [ebp-30h] BYREF
  int v25; // [esp+2Ch] [ebp-20h]
  int v26; // [esp+30h] [ebp-1Ch]
  char *v27; // [esp+34h] [ebp-18h]
  char *v28; // [esp+38h] [ebp-14h]
  int v29; // [esp+3Ch] [ebp-10h]
  int v30; // [esp+40h] [ebp-Ch]
  int v31; // [esp+44h] [ebp-8h]
  int v32; // [esp+54h] [ebp+8h]
  struct _CLIPOBJ *v33; // [esp+58h] [ebp+Ch]

  memset(&v24, 0, sizeof(v24));
  if ( a3 && a3->iDComplexity )
  {
    v24.left = a3->rclBounds.left;
    if ( v24.left <= a2->left )
      v24.left = a2->left;
    top = a2->top;
    v24.top = a3->rclBounds.top;
    if ( v24.top <= top )
      v24.top = top;
    right = a2->right;
    v24.right = a3->rclBounds.right;
    if ( v24.right >= right )
      v24.right = right;
    if ( a3->rclBounds.bottom >= a2->bottom )
      v24.bottom = a2->bottom;
    else
      v24.bottom = a3->rclBounds.bottom;
  }
  else
  {
    v24 = *a2;
  }
  ERECTL::vOrder((ERECTL *)&v24);
  v7 = *((_DWORD *)this + 2);
  v23[0] = 0;
  v23[1] = 0;
  v8 = *(_DWORD *)(v7 + 52);
  v23[2] = *(_DWORD *)(v8 + 16);
  v23[3] = *(_DWORD *)(v8 + 20);
  ERECTL::operator*=(&v24.left, v23);
  memset((char *)this + 12, 0, 0x51u);
  if ( !ERECTL::bEmpty((ERECTL *)&v24) )
  {
    v9 = *((_DWORD *)this + 2);
    v10 = *(_DWORD *)(v9 + 404);
    v11 = *(_DWORD *)(v9 + 408);
    v32 = v24.left / v10;
    v31 = v24.top / v11;
    v12 = v24.right / v10;
    v13 = v24.left / v10;
    v14 = (struct _CLIPOBJ *)(v12 + 1);
    v15 = v24.bottom / v11;
    v16 = 9 * (v24.top / v11);
    v33 = v14;
    v25 = v15 + 1;
    v27 = (char *)this + v16 + 12;
    v26 = 4 * (v13 + v16) + 80;
LABEL_15:
    KeWaitForSingleObject((PVOID)(*(_DWORD *)(*((_DWORD *)this + 2) + 416) + 20), UserRequest, 0, 0, 0);
    v17 = v31;
    v18 = v27;
    for ( i = v26; ; i += 36 )
    {
      v29 = i;
      v28 = v18;
      v30 = v17;
      if ( v17 >= v25 )
        break;
      if ( v32 < (int)v14 )
      {
        v20 = i;
        while ( 1 )
        {
          v22 = *(HSEMAPHORE *)(v20 + *((_DWORD *)this + 2));
          v21 = a4 ? EngAcquireSemaphoreSharedNoWait(v22) : EngAcquireSemaphoreNoWait(v22);
          if ( v21 != 1 )
            break;
          v18 = v28;
          v20 += 4;
          v28[v13++] = 1;
          if ( v13 >= (int)v33 )
          {
            v17 = v30;
            i = v29;
            v14 = v33;
            goto LABEL_25;
          }
        }
        PANSURFLOCK::vUnLockShadowAndWait(this);
        memset((char *)this + 12, 0, 0x51u);
        v14 = v33;
        v13 = v32;
        goto LABEL_15;
      }
LABEL_25:
      v13 = v32;
      ++v17;
      v18 += 9;
    }
    KeReleaseMutex((PRKMUTEX)(*(_DWORD *)(*((_DWORD *)this + 2) + 416) + 20), 0);
  }
}
