/*
 * XREFs of ?bTightBoundsToRegion@DEVLOCKOBJ@@QAEHXZ @ 0xF5D67
 * Callers:
 *     ?GrePolyPatBltInternal@@YGHAAVXDCOBJ@@KPAU_POLYPATBLT@@KKKKKK@Z @ 0x57040 (-GrePolyPatBltInternal@@YGHAAVXDCOBJ@@KPAU_POLYPATBLT@@KKKKKK@Z.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QBEHXZ @ 0x4F396 (-bEmpty@ERECTL@@QBEHXZ.c)
 *     ?bValid@DLODCOBJ@@QAE_NXZ @ 0x5A95C (-bValid@DLODCOBJ@@QAE_NXZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __thiscall DEVLOCKOBJ::bTightBoundsToRegion(DEVLOCKOBJ *this)
{
  int v1; // ebx
  int v2; // ecx
  _DWORD *v3; // esi
  int v4; // eax
  int v5; // eax
  LONG *v6; // esi
  DEVLOCKOBJ *v7; // edi
  _DWORD *v8; // eax
  DEVLOCKOBJ *v9; // eax
  _DWORD v11[2]; // [esp+10h] [ebp-28h] BYREF
  int v12; // [esp+18h] [ebp-20h] BYREF
  int v13; // [esp+1Ch] [ebp-1Ch]
  DEVLOCKOBJ *v14; // [esp+20h] [ebp-18h] BYREF
  struct _RECTL v15; // [esp+24h] [ebp-14h] BYREF

  v14 = this;
  v1 = 1;
  if ( DLODCOBJ::bValid((DEVLOCKOBJ *)((char *)this + 20)) )
  {
    v3 = *(_DWORD **)v2;
    v4 = *(_DWORD *)(*(_DWORD *)v2 + 24);
    if ( (v4 & 0x4000) != 0 && (v4 & 0x40) != 0 )
    {
      if ( v3[122] )
      {
        if ( v3[124] )
        {
          v5 = v3[293];
          v6 = v3 + 278;
          v13 = v5;
          v15.left = *v6++;
          v15.top = *v6++;
          v15.right = *v6;
          v15.bottom = v6[1];
          if ( !ERECTL::bEmpty((ERECTL *)&v15) )
          {
            v1 = 0;
            RGNMEMOBJ::RGNMEMOBJ(v11, 1);
            if ( v11[0] )
            {
              RGNOBJ::vSet((RGNOBJ *)v11, &v15);
              v7 = v14;
              v8 = (_DWORD *)*((_DWORD *)v14 + 5);
              v8[278] = 0;
              v8[279] = 0;
              v8[280] = 0;
              v8[281] = 0;
              if ( v13 )
              {
                RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v12);
                RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v12);
                v9 = *(DEVLOCKOBJ **)(*((_DWORD *)v7 + 5) + 1172);
                v14 = v9;
                if ( v12 && v9 && RGNOBJ::bMerge((RGNOBJ *)&v12, (struct RGNOBJ *)&v14, (struct RGNOBJ *)v11, 0xEu) )
                {
                  RGNOBJ::vSwap((RGNOBJ *)&v12, (struct RGNOBJ *)&v14);
                  v1 = 1;
                  *(_DWORD *)(*((_DWORD *)v7 + 5) + 1172) = v14;
                }
                RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v12);
                RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v12);
                if ( v13 == 1 )
                  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v12);
              }
              else
              {
                v1 = 1;
                *(_DWORD *)(*((_DWORD *)v7 + 5) + 1172) = v11[0];
                v11[0] = 0;
              }
            }
            if ( v11[1] == 1 )
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v11);
          }
        }
      }
    }
  }
  return v1;
}
