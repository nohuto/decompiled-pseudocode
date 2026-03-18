/*
 * XREFs of ?bTightenRao@DC@@QAEHXZ @ 0x7A1A2
 * Callers:
 *     ?GreExtTextOutWLocked@@YGHAAVXDCOBJ@@HHIPAUtagRECT@@PAGHPAHKPAXK@Z @ 0x61F50 (-GreExtTextOutWLocked@@YGHAAVXDCOBJ@@HHIPAUtagRECT@@PAGHPAHKPAXK@Z.c)
 *     ?bBitBlt@BLTRECORD@@QAEHAAVDCOBJ@@0K@Z @ 0x79928 (-bBitBlt@BLTRECORD@@QAEHAAVDCOBJ@@0K@Z.c)
 *     ?GreExtSelectClipRgnLocked@@YGHAAVXDCOBJ@@PAU_RECTL@@H@Z @ 0x79F82 (-GreExtSelectClipRgnLocked@@YGHAAVXDCOBJ@@PAU_RECTL@@H@Z.c)
 *     ?NtGdiInvertRgnInternal@@YGHPAUHDC__@@PAUHRGN__@@@Z @ 0x1FD92A (-NtGdiInvertRgnInternal@@YGHPAUHDC__@@PAUHRGN__@@@Z.c)
 *     _NtGdiFillRgn@12 @ 0x1FE14A (_NtGdiFillRgn@12.c)
 *     _NtGdiFrameRgn@20 @ 0x1FE62D (_NtGdiFrameRgn@20.c)
 *     _NtGdiOffsetClipRgn@12 @ 0x1FED41 (_NtGdiOffsetClipRgn@12.c)
 * Callees:
 *     ?bContain@RGNOBJ@@QAEHAAV1@@Z @ 0x7A4CA (-bContain@RGNOBJ@@QAEHAAV1@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __thiscall DC::bTightenRao(DC *this)
{
  int v2; // edi
  int v3; // edx
  int v4; // ecx
  int v5; // eax
  int v7; // ebx
  int v8; // eax
  int v9; // edx
  int v10; // [esp+Ch] [ebp-2Ch] BYREF
  int v11; // [esp+10h] [ebp-28h] BYREF
  int v12; // [esp+14h] [ebp-24h] BYREF
  int v13; // [esp+18h] [ebp-20h] BYREF
  int v14; // [esp+1Ch] [ebp-1Ch] BYREF
  int v15; // [esp+20h] [ebp-18h]
  int v16; // [esp+24h] [ebp-14h] BYREF
  int v17; // [esp+28h] [ebp-10h]
  int v18; // [esp+2Ch] [ebp-Ch]
  int v19; // [esp+30h] [ebp-8h]

  v2 = 0;
  if ( !*((_DWORD *)this + 288) )
    return v2;
  *((_DWORD *)this + 258) = 0x7FFFFFFF;
  v2 = 1;
  *((_DWORD *)this + 259) = 0x7FFFFFFF;
  *((_DWORD *)this + 260) = 0x80000000;
  *((_DWORD *)this + 261) = 0x80000000;
  v3 = *((_DWORD *)this + 27);
  v4 = *((_DWORD *)this + 286);
  v12 = *((_DWORD *)this + 288);
  v16 = *((_DWORD *)this + 26);
  if ( v4 | v3 | v16 )
  {
    v18 = 0;
    v19 = 0;
    v17 = v16;
    v7 = v16 != 0;
    *(&v17 + v7) = v3;
    if ( v3 )
      ++v7;
    *(&v17 + v7) = v4;
    if ( v4 )
      ++v7;
    v16 = *((_DWORD *)this + 289);
    if ( !v16 )
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v14);
      if ( v14 )
        v16 = v14;
      if ( v15 == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v14);
    }
    if ( v16 )
    {
      if ( v7 == 1 )
      {
        v13 = v17;
        v8 = RGNOBJ::bCopy((RGNOBJ *)&v16, (struct RGNOBJ *)&v13);
      }
      else
      {
        if ( v7 != 2 )
        {
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v14);
          RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v14);
          v13 = v17;
          v11 = v18;
          v10 = v19;
          if ( !v14
            || !RGNOBJ::iCombine((RGNOBJ *)&v14, (struct RGNOBJ *)&v13, (struct RGNOBJ *)&v11, 1)
            || !RGNOBJ::iCombine((RGNOBJ *)&v16, (struct RGNOBJ *)&v14, (struct RGNOBJ *)&v10, 1) )
          {
            v2 = 0;
          }
          RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v14);
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v14);
          if ( v15 == 1 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v14);
          if ( v2 )
          {
LABEL_24:
            v9 = v16;
            *(_DWORD *)(v9 + 20) = _InterlockedIncrement((volatile signed __int32 *)REGION::ulUniqueREGION);
            if ( RGNOBJ::bOffset((RGNOBJ *)&v16, (struct _POINTL *)this + 133) )
            {
              if ( *(_DWORD *)(v12 + 52) == 56 && RGNOBJ::bContain((RGNOBJ *)&v12, (struct RGNOBJ *)&v16) )
              {
                *((_DWORD *)this + 289) = v16;
                RGNOBJ::vGetSubRect((RGNOBJ *)&v16, (struct _RECTL *)((char *)this + 1032));
              }
              else
              {
                RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v14);
                RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v14);
                if ( v14
                  && RGNOBJ::iCombine((RGNOBJ *)&v14, (struct RGNOBJ *)&v12, (struct RGNOBJ *)&v16, 1)
                  && RGNOBJ::bCopy((RGNOBJ *)&v16, (struct RGNOBJ *)&v14) )
                {
                  *((_DWORD *)this + 289) = v16;
                  RGNOBJ::vGetSubRect((RGNOBJ *)&v16, (struct _RECTL *)((char *)this + 1032));
                }
                else
                {
                  v2 = 0;
                }
                RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v14);
                RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v14);
                if ( v15 == 1 )
                  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v14);
              }
            }
            else
            {
              v2 = 0;
            }
            if ( v2 )
              goto LABEL_6;
          }
LABEL_39:
          *((_DWORD *)this + 289) = 0;
          if ( v16 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v16);
          goto LABEL_6;
        }
        v11 = v17;
        v13 = v18;
        v8 = RGNOBJ::iCombine((RGNOBJ *)&v16, (struct RGNOBJ *)&v11, (struct RGNOBJ *)&v13, 1);
      }
      if ( v8 )
        goto LABEL_24;
    }
    v2 = 0;
    goto LABEL_39;
  }
  if ( *((_DWORD *)this + 289) )
  {
    v16 = *((_DWORD *)this + 289);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v16);
    *((_DWORD *)this + 289) = 0;
  }
  RGNOBJ::vGetSubRect((RGNOBJ *)&v12, (struct _RECTL *)((char *)this + 1032));
LABEL_6:
  DC::vUpdate_VisRect(this, *((struct REGION **)this + 288));
  v5 = *((_DWORD *)this + 126);
  if ( v5 && (*(_DWORD *)(v5 + 76) & 0x800) != 0 )
    *((_DWORD *)this + 130) |= 8u;
  DC::vUpdateScaledRegions(this);
  return v2;
}
