/*
 * XREFs of ?bTightBoundsToRegion@DEVLOCKOBJ@@QEAAHXZ @ 0x1C015D2AC
 * Callers:
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C009D960 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00690E4 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C009ECF8 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

__int64 __fastcall DEVLOCKOBJ::bTightBoundsToRegion(DEVLOCKOBJ *this)
{
  __int64 v1; // rax
  unsigned int v3; // edi
  int v4; // ecx
  __int64 v5; // rsi
  _DWORD *v6; // rax
  __int64 v7; // rcx
  __int64 v9; // [rsp+20h] [rbp-40h] BYREF
  __int64 v10; // [rsp+28h] [rbp-38h] BYREF
  int v11; // [rsp+30h] [rbp-30h]
  _QWORD v12[2]; // [rsp+38h] [rbp-28h] BYREF
  struct _RECTL v13; // [rsp+48h] [rbp-18h] BYREF

  v1 = *((_QWORD *)this + 4);
  v3 = 1;
  if ( v1 )
  {
    if ( *((_BYTE *)this + 49) )
    {
      v4 = *(_DWORD *)(v1 + 36);
      if ( (v4 & 0x4000) != 0 && (v4 & 0x40) != 0 )
      {
        if ( *(_QWORD *)(v1 + 472) )
        {
          if ( *(_DWORD *)(v1 + 488) )
          {
            v5 = *(_QWORD *)(v1 + 1168);
            v13 = *(struct _RECTL *)(v1 + 1080);
            if ( !ERECTL::bEmpty((ERECTL *)&v13) )
            {
              v3 = 0;
              RGNMEMOBJ::RGNMEMOBJ(&v10, 1LL);
              if ( v10 )
              {
                RGNOBJ::vSet((RGNOBJ *)&v10, &v13);
                v6 = (_DWORD *)(*((_QWORD *)this + 4) + 1080LL);
                *v6 = 0;
                v6[1] = 0;
                v6[2] = 0;
                v6[3] = 0;
                if ( v5 )
                {
                  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v12);
                  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v12);
                  v7 = *(_QWORD *)(*((_QWORD *)this + 4) + 1168LL);
                  v9 = v7;
                  if ( v12[0] && v7 && RGNOBJ::bMerge((RGNOBJ *)v12, (struct RGNOBJ *)&v9, (struct RGNOBJ *)&v10, 0xEu) )
                  {
                    RGNOBJ::vSwap((RGNOBJ *)v12, (struct RGNOBJ *)&v9);
                    v3 = 1;
                    *(_QWORD *)(*((_QWORD *)this + 4) + 1168LL) = v9;
                  }
                  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v12);
                }
                else
                {
                  *(_QWORD *)(*((_QWORD *)this + 4) + 1168LL) = v10;
                  v10 = 0LL;
                  v3 = 1;
                }
              }
              if ( v11 == 1 )
                RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v10);
            }
          }
        }
      }
    }
  }
  return v3;
}
