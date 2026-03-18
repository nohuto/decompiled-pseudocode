/*
 * XREFs of ?PanLockDisplayArea@@YGXPAUDHPDEV__@@PAU_RECTL@@@Z @ 0x1F5FFA
 * Callers:
 *     <none>
 * Callees:
 *     ?vOrder@ERECTL@@QAEXXZ @ 0x4E19C (-vOrder@ERECTL@@QAEXXZ.c)
 *     ?bEmpty@ERECTL@@QBEHXZ @ 0x4F396 (-bEmpty@ERECTL@@QBEHXZ.c)
 *     ??XERECTL@@QAEAAV0@ABU_RECTL@@@Z @ 0x4F46A (--XERECTL@@QAEAAV0@ABU_RECTL@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?ShadowUnLockWait@@YGXPAU_PANDEV@@@Z @ 0x1F6AFC (-ShadowUnLockWait@@YGXPAU_PANDEV@@@Z.c)
 */

void __stdcall PanLockDisplayArea(struct DHPDEV__ *a1, struct _RECTL *a2)
{
  int v2; // ecx
  ERECTL *v3; // ecx
  unsigned int v4; // ecx
  unsigned int v5; // esi
  int v6; // eax
  int v7; // ecx
  int v8; // edi
  int v9; // eax
  int v10; // esi
  int v11; // eax
  _BYTE *v12; // ecx
  struct DHPDEV__ *i; // edx
  HSEMAPHORE *v14; // edi
  _BYTE *v15; // esi
  HSEMAPHORE *v16; // edi
  int v17; // eax
  struct _PANDEV *v18; // [esp+0h] [ebp-A8h]
  int v19[4]; // [esp+Ch] [ebp-9Ch] BYREF
  struct _RECTL v20; // [esp+1Ch] [ebp-8Ch] BYREF
  int v21; // [esp+2Ch] [ebp-7Ch]
  struct DHPDEV__ *v22; // [esp+30h] [ebp-78h]
  _BYTE *v23; // [esp+34h] [ebp-74h]
  int v24; // [esp+38h] [ebp-70h]
  int v25; // [esp+3Ch] [ebp-6Ch]
  int v26; // [esp+40h] [ebp-68h]
  int v27; // [esp+44h] [ebp-64h]
  int v28; // [esp+48h] [ebp-60h]
  int v29; // [esp+4Ch] [ebp-5Ch]
  _BYTE v30[84]; // [esp+50h] [ebp-58h] BYREF

  v20 = *a2;
  ERECTL::vOrder((ERECTL *)&v20);
  v2 = *((_DWORD *)a1 + 13);
  v19[0] = 0;
  v19[1] = 0;
  v19[2] = *(_DWORD *)(v2 + 16);
  v19[3] = *(_DWORD *)(v2 + 20);
  ERECTL::operator*=(&v20.left, v19);
  if ( !ERECTL::bEmpty(v3) )
  {
    v4 = *((_DWORD *)a1 + 101);
    v5 = *((_DWORD *)a1 + 102);
    v27 = v20.left / v4;
    v25 = v20.top / v5;
    v6 = v20.right / v4;
    v7 = 9 * (v20.top / v5);
    v8 = v6 + 1;
    v9 = v20.bottom / v5;
    v10 = v27;
    v26 = v8;
    v21 = v9 + 1;
    v23 = &v30[v7];
    v22 = a1 + v7 + v27 + 20;
LABEL_3:
    memset(v30, 0, 0x51u);
    KeWaitForSingleObject((PVOID)(*((_DWORD *)a1 + 104) + 20), UserRequest, 0, 0, 0);
    v11 = v25;
    v12 = v23;
    for ( i = v22; ; i += 9 )
    {
      v29 = (int)i;
      v28 = (int)v12;
      v24 = v11;
      if ( v11 >= v21 )
        break;
      if ( v27 < v8 )
      {
        v14 = (HSEMAPHORE *)i;
        while ( EngAcquireSemaphoreNoWait(*v14) )
        {
          v12 = (_BYTE *)v28;
          ++v14;
          *(_BYTE *)(v28 + v10++) = 1;
          if ( v10 >= v26 )
          {
            v11 = v24;
            i = (struct DHPDEV__ *)v29;
            v8 = v26;
            goto LABEL_10;
          }
        }
        v29 = 8;
        v15 = &v30[80];
        v16 = (HSEMAPHORE *)(a1 + 100);
        do
        {
          v17 = 8;
          v28 = 8;
          do
          {
            if ( *v15 == 1 )
            {
              EngReleaseSemaphore(*v16);
              v17 = v28;
              *v15 = 0;
            }
            --v17;
            --v16;
            --v15;
            v28 = v17;
          }
          while ( v17 >= 0 );
          --v29;
        }
        while ( v29 >= 0 );
        ShadowUnLockWait(v18);
        v8 = v26;
        v10 = v27;
        goto LABEL_3;
      }
LABEL_10:
      v10 = v27;
      ++v11;
      v12 += 9;
    }
    KeReleaseMutex((PRKMUTEX)(*((_DWORD *)a1 + 104) + 20), 0);
  }
}
