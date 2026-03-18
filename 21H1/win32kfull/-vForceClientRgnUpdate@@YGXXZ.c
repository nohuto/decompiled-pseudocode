/*
 * XREFs of ?vForceClientRgnUpdate@@YGXXZ @ 0x1E6558
 * Callers:
 *     ?vAccNotify@@YGXPAU_SURFOBJ@@KPAX@Z @ 0x213E8 (-vAccNotify@@YGXPAU_SURFOBJ@@KPAX@Z.c)
 *     ?iWndObjSetupExtEscape@@YGHAAVDCOBJ@@HHPAXH1@Z @ 0x1D84D0 (-iWndObjSetupExtEscape@@YGHAAVDCOBJ@@HHPAXH1@Z.c)
 *     _NtGdiSetPixelFormat@8 @ 0x222992 (_NtGdiSetPixelFormat@8.c)
 * Callees:
 *     ??1RGNOBJAPI@@QAE@XZ @ 0x24D20 (--1RGNOBJAPI@@QAE@XZ.c)
 *     _GreClientRgnUpdated@4 @ 0x384C8 (_GreClientRgnUpdated@4.c)
 *     ?bEmpty@ERECTL@@QBEHXZ @ 0x4F396 (-bEmpty@ERECTL@@QBEHXZ.c)
 *     ?bOffsetAdd@ERECTL@@QAEHABU_POINTL@@H@Z @ 0x53E36 (-bOffsetAdd@ERECTL@@QAEHABU_POINTL@@H@Z.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _UserGetClientRgn@12 @ 0x154297 (_UserGetClientRgn@12.c)
 *     ?vSpWndobjChange@@YGXPAUHDEV__@@PAVEWNDOBJ@@@Z @ 0x1E3129 (-vSpWndobjChange@@YGXPAUHDEV__@@PAVEWNDOBJ@@@Z.c)
 *     ?vSetClip@EWNDOBJ@@QAEXPAVREGION@@VERECTL@@@Z @ 0x1E68E5 (-vSetClip@EWNDOBJ@@QAEXPAVREGION@@VERECTL@@@Z.c)
 */

void __stdcall vForceClientRgnUpdate()
{
  struct TRACKOBJ *v0; // esi
  int v1; // eax
  _DWORD *i; // ebx
  int v3; // eax
  unsigned int v4; // eax
  unsigned int v5; // ecx
  int ClientRgn; // eax
  int *v7; // esi
  HRGN v8; // edi
  int v9; // ecx
  _DWORD *v10; // eax
  int v11; // edx
  int v12; // ecx
  struct RGNOBJ *v13; // ebx
  int v14; // edx
  _DWORD *v15; // esi
  struct TRACKOBJ *v16; // edi
  int v17; // edx
  struct _POINTL v18; // [esp+10h] [ebp-50h] BYREF
  int v19; // [esp+18h] [ebp-48h] BYREF
  _DWORD *v20; // [esp+1Ch] [ebp-44h]
  _DWORD v21[3]; // [esp+20h] [ebp-40h] BYREF
  struct TRACKOBJ *v22; // [esp+2Ch] [ebp-34h]
  _DWORD v23[2]; // [esp+30h] [ebp-30h] BYREF
  _DWORD v24[2]; // [esp+38h] [ebp-28h] BYREF
  int v25; // [esp+40h] [ebp-20h] BYREF
  int v26; // [esp+44h] [ebp-1Ch] BYREF
  int v27; // [esp+48h] [ebp-18h] BYREF
  int v28; // [esp+4Ch] [ebp-14h] BYREF
  int v29; // [esp+50h] [ebp-10h]
  int v30; // [esp+54h] [ebp-Ch]
  int v31; // [esp+58h] [ebp-8h]

  v19 = _ghsemWndobj;
  GreAcquireSemaphore(_ghsemWndobj);
  v0 = gpto;
  v22 = gpto;
  if ( gpto )
  {
    while ( 1 )
    {
      v1 = *((_DWORD *)v0 + 6);
      if ( (v1 & 0x40000000) != 0 )
        break;
      v0 = (struct TRACKOBJ *)*((_DWORD *)v0 + 1);
      v22 = v0;
      if ( !v0 )
        goto LABEL_4;
    }
    *((_DWORD *)v0 + 6) = v1 & 0x3FFFFFFF | 0x80000000;
    for ( i = (_DWORD *)*((_DWORD *)v0 + 3); ; i = (_DWORD *)i[32] )
    {
      v20 = i;
      if ( !i )
        break;
      v3 = i[35];
      if ( (v3 & 0x40000000) != 0 )
      {
        v4 = v3 & 0x3FFFFFFF | 0x80000000;
        i[35] = v4;
        v5 = i[34];
        if ( v5 )
        {
          ClientRgn = UserGetClientRgn(v5, &v28, v4 & 0x20);
        }
        else
        {
          v7 = (int *)((char *)v0 + 28);
          v28 = *v7++;
          v29 = *v7++;
          v30 = *v7;
          v31 = v7[1];
          ClientRgn = GreCreateRectRgnIndirect(&v28);
          v0 = v22;
        }
        v8 = (HRGN)ClientRgn;
        if ( !ClientRgn )
          break;
        v25 = 0;
        GreSetRegionOwner(ClientRgn, 0);
        RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v21, v8, 0);
        if ( v21[0] )
        {
          if ( (i[35] & 0x100) == 0 )
          {
            v9 = *(_DWORD *)(i[33] + 16);
            v10 = *(_DWORD **)(v9 + 28);
            if ( v10 )
            {
              if ( v9 == v10[455] )
              {
                v11 = v10[459];
                v18.x = -v11;
                v12 = v10[460];
                v18.y = -v12;
                if ( v11 || v12 )
                {
                  RGNOBJ::bOffset((RGNOBJ *)v21, &v18);
                  ERECTL::bOffsetAdd((ERECTL *)&v28, &v18, 0);
                }
              }
            }
            RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v26);
            RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v26);
            RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v24);
            RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v24);
            if ( v26 )
            {
              if ( v24[0] )
              {
                RGNOBJ::vSet((RGNOBJ *)v24, (struct _RECTL *)((char *)v0 + 28));
                RGNOBJ::bCopy((RGNOBJ *)&v26, (struct RGNOBJ *)v21);
                RGNOBJAPI::iCombine((RGNOBJAPI *)v21, (struct RGNOBJ *)&v26, (struct RGNOBJ *)v24, 1);
                if ( RGNOBJ::iCombine((RGNOBJ *)&v26, (struct RGNOBJ *)v21, (struct RGNOBJ *)v24, 1) )
                  RGNOBJAPI::bSwap((RGNOBJAPI *)v21, (struct RGNOBJ *)&v26);
              }
            }
            RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)v24);
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v24);
            if ( v24[1] == 1 )
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v24);
            RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v26);
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v26);
            if ( v27 == 1 )
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v26);
          }
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v23);
          RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v23);
          if ( (i[35] & 0x200) != 0 && v23[0] && RGNOBJ::bCopy((RGNOBJ *)v23, (struct RGNOBJ *)v21) )
            v25 = 1;
          v27 = i[38];
          GreAcquireSemaphore(v27);
          if ( v25 == 1 )
          {
            v25 = i[37];
            if ( v25 )
            {
              RGNOBJ::vSwap((RGNOBJ *)v23, (struct RGNOBJ *)&v25);
              i[37] = v25;
            }
          }
          v13 = (struct RGNOBJ *)(i + 12);
          RGNOBJAPI::bSwap((RGNOBJAPI *)v21, v13);
          v14 = *(_DWORD *)v13;
          *(_DWORD *)(v14 + 20) = _InterlockedIncrement((volatile signed __int32 *)REGION::ulUniqueREGION);
          v15 = v20;
          EWNDOBJ::vSetClip(v20, *(_DWORD *)v13, v28, v29, v30, v31);
          RGNOBJAPI::bDeleteRGNOBJAPI((RGNOBJAPI *)v21);
          v16 = v22;
          v17 = *((_DWORD *)v22 + 6);
          if ( (v17 & 1) != 0 && !ERECTL::bEmpty((ERECTL *)(v15 + 1)) )
          {
            (*((void (__stdcall **)(_DWORD *, int))v16 + 5))(v15, 1);
            v17 = *((_DWORD *)v16 + 6);
          }
          if ( (v17 & 2) != 0 )
            (*((void (__stdcall **)(_DWORD *, int))v16 + 5))(v15, 2);
          vSpWndobjChange(*(_DWORD *)(*((_DWORD *)v16 + 4) + 28), (struct EWNDOBJ *)v15);
          SEMOBJ::vUnlock((SEMOBJ *)&v27);
          RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)v23);
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v23);
          if ( v23[1] == 1 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v23);
        }
        RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v21);
        SEMOBJ::vUnlock((SEMOBJ *)&v19);
        GreClientRgnUpdated(1);
        return;
      }
    }
  }
LABEL_4:
  SEMOBJ::vUnlock((SEMOBJ *)&v19);
}
