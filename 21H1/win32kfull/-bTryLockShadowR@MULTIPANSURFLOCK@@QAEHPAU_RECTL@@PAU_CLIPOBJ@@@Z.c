/*
 * XREFs of ?bTryLockShadowR@MULTIPANSURFLOCK@@QAEHPAU_RECTL@@PAU_CLIPOBJ@@@Z @ 0x1F6C15
 * Callers:
 *     ??0MULTIPANSURFLOCK@@QAE@PAU_PANDEV@@PAPAU_SURFOBJ@@1PAU_RECTL@@2PAHPAU_CLIPOBJ@@@Z @ 0x1F53B5 (--0MULTIPANSURFLOCK@@QAE@PAU_PANDEV@@PAPAU_SURFOBJ@@1PAU_RECTL@@2PAHPAU_CLIPOBJ@@@Z.c)
 * Callees:
 *     ?vOrder@ERECTL@@QAEXXZ @ 0x4E19C (-vOrder@ERECTL@@QAEXXZ.c)
 *     ?bEmpty@ERECTL@@QBEHXZ @ 0x4F396 (-bEmpty@ERECTL@@QBEHXZ.c)
 *     ??XERECTL@@QAEAAV0@ABU_RECTL@@@Z @ 0x4F46A (--XERECTL@@QAEAAV0@ABU_RECTL@@@Z.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?ShadowUnLockWait@@YGXPAU_PANDEV@@@Z @ 0x1F6AFC (-ShadowUnLockWait@@YGXPAU_PANDEV@@@Z.c)
 *     ?vUnLockShadowR@MULTIPANSURFLOCK@@QAEXXZ @ 0x1F761D (-vUnLockShadowR@MULTIPANSURFLOCK@@QAEXXZ.c)
 *     ?vUnLockShadowWNoWaiterRelease@MULTIPANSURFLOCK@@QAEXXZ @ 0x1F771F (-vUnLockShadowWNoWaiterRelease@MULTIPANSURFLOCK@@QAEXXZ.c)
 */

int __thiscall MULTIPANSURFLOCK::bTryLockShadowR(MULTIPANSURFLOCK *this, struct _RECTL *a2, struct _CLIPOBJ *a3)
{
  int v4; // esi
  int v5; // ecx
  int v6; // edx
  ERECTL *v7; // ecx
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  int v13; // edi
  int v14; // esi
  int v15; // ecx
  int v16; // esi
  struct _RECTL *v17; // ecx
  char *v18; // edx
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  PVOID *v22; // ecx
  int result; // eax
  int v24; // eax
  int v25[4]; // [esp+Ch] [ebp-34h] BYREF
  struct _RECTL v26; // [esp+1Ch] [ebp-24h] BYREF
  char *v27; // [esp+2Ch] [ebp-14h]
  int v28; // [esp+30h] [ebp-10h]
  int v29; // [esp+34h] [ebp-Ch]
  int v30; // [esp+38h] [ebp-8h]
  int v31; // [esp+3Ch] [ebp-4h]

  v26 = *a2;
  ERECTL::vOrder((ERECTL *)&v26);
  v4 = *((_DWORD *)this + 4);
  v5 = v4;
  if ( v4 )
  {
    v6 = *((_DWORD *)this + 4);
  }
  else
  {
    v5 = *((_DWORD *)this + 5);
    v6 = v5;
  }
  v25[0] = 0;
  v25[1] = 0;
  v25[2] = *(_DWORD *)(*(_DWORD *)(v6 + 52) + 16);
  v25[3] = *(_DWORD *)(*(_DWORD *)(v5 + 52) + 20);
  ERECTL::operator*=(&v26.left, v25);
  if ( ERECTL::bEmpty(v7) )
    return 1;
  v8 = v4;
  if ( !v4 )
    v8 = *((_DWORD *)this + 5);
  v9 = v26.left / *(_DWORD *)(v8 + 404);
  v10 = v4;
  v29 = v9;
  if ( !v4 )
    v10 = *((_DWORD *)this + 5);
  v11 = v26.right / *(_DWORD *)(v10 + 404);
  v12 = v4;
  a2 = (struct _RECTL *)v11;
  if ( !v4 )
    v12 = *((_DWORD *)this + 5);
  v13 = v26.top / *(_DWORD *)(v12 + 408);
  if ( !v4 )
    v4 = *((_DWORD *)this + 5);
  v31 = v26.bottom / *(_DWORD *)(v4 + 408);
  *((_BYTE *)this + 24) = 1;
  memset((char *)this + 26, 0, 0x51u);
  a2 = (struct _RECTL *)((char *)a2 + 1);
  v14 = v31 + 1;
  v15 = *((_DWORD *)this + 4);
  ++v31;
  if ( !v15 )
    v15 = *((_DWORD *)this + 5);
  KeWaitForSingleObject((PVOID)(*(_DWORD *)(v15 + 416) + 20), UserRequest, 0, 0, 0);
  if ( v13 >= v14 )
  {
LABEL_29:
    v24 = *((_DWORD *)this + 4);
    if ( !v24 )
      v24 = *((_DWORD *)this + 5);
    KeReleaseMutex((PRKMUTEX)(*(_DWORD *)(v24 + 416) + 20), 0);
    return 1;
  }
  v16 = v29;
  v17 = a2;
  v18 = (char *)this + 9 * v13 + 26;
  v27 = v18;
  v30 = 4 * (v29 + 9 * v13) + 80;
  v19 = v31;
  while ( v29 >= (int)v17 )
  {
LABEL_23:
    v30 += 36;
    ++v13;
    v18 += 9;
    v27 = v18;
    if ( v13 >= v19 )
      goto LABEL_29;
    v16 = v29;
  }
  v20 = v30;
  v28 = v30;
  while ( 1 )
  {
    v21 = *((_DWORD *)this + 4);
    if ( !v21 )
      v21 = *((_DWORD *)this + 5);
    if ( EngAcquireSemaphoreSharedNoWait(*(_DWORD *)(v20 + v21)) != 1 )
      break;
    v18 = v27;
    v20 = v28 + 4;
    v28 += 4;
    v27[v16++] = 1;
    if ( v16 >= (int)a2 )
    {
      v19 = v31;
      v17 = a2;
      goto LABEL_23;
    }
  }
  MULTIPANSURFLOCK::vUnLockShadowWNoWaiterRelease(this);
  memset((char *)this + 107, 0, 0x51u);
  a2 = 0;
  _InterlockedOr((volatile signed __int32 *)&a2, 0);
  MULTIPANSURFLOCK::vUnLockShadowR(this);
  v22 = (PVOID *)*((_DWORD *)this + 4);
  if ( !v22 )
    v22 = (PVOID *)*((_DWORD *)this + 5);
  ShadowUnLockWait(v22);
  memset((char *)this + 26, 0, 0x51u);
  result = 0;
  *((_BYTE *)this + 24) = 0;
  return result;
}
