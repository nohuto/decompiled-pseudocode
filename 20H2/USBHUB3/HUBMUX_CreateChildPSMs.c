/*
 * XREFs of HUBMUX_CreateChildPSMs @ 0x1C000EF44
 * Callers:
 *     HUBHSM_CreatingChildPSMs @ 0x1C00080A0 (HUBHSM_CreatingChildPSMs.c)
 * Callees:
 *     HUBMUX_CreatePSM @ 0x1C000E9AC (HUBMUX_CreatePSM.c)
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBMUX_CreateChildPSMs(__int64 a1)
{
  unsigned __int16 v2; // di
  unsigned __int16 *v3; // rdx
  unsigned __int16 v4; // r8
  unsigned __int64 PSM; // rdx
  __int64 v6; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rdx
  unsigned __int16 v9; // di
  unsigned __int16 v10; // cx
  __int64 v11; // rdx
  unsigned __int16 v12; // r8
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // rdx
  unsigned __int16 v17; // ax
  unsigned __int16 v18; // dx
  __int64 v19; // r8
  __int64 v20; // rax
  unsigned int v21; // esi
  _QWORD **v23; // rdi
  _QWORD *v24; // rcx
  __int64 v25; // rax
  _QWORD *v26; // rax
  __int128 v27; // [rsp+48h] [rbp-19h] BYREF
  __int128 v28; // [rsp+58h] [rbp-9h]
  __int64 v29; // [rsp+68h] [rbp+7h]
  __int128 v30; // [rsp+70h] [rbp+Fh] BYREF
  __int128 v31; // [rsp+80h] [rbp+1Fh]
  __int128 v32; // [rsp+90h] [rbp+2Fh]
  __int64 v33; // [rsp+A0h] [rbp+3Fh]
  __int64 v34; // [rsp+C8h] [rbp+67h] BYREF

  *(_DWORD *)(a1 + 146) = 0xFFFF;
  v29 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v2 = 0;
  v27 = 0LL;
  v28 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  if ( *(_WORD *)(a1 + 144) )
  {
    while ( 1 )
    {
      v27 = 0LL;
      v29 = 0LL;
      v28 = 0LL;
      _InterlockedOr((volatile signed __int32 *)&v27 + 1, 1u);
      if ( *(_BYTE *)(a1 + 240) )
      {
        v4 = v2 + 1;
        LOWORD(v27) = v2 + 1;
        if ( ((unsigned __int8)(1 << ((v2 + 1) & 7)) & *(_BYTE *)(((unsigned __int64)(unsigned __int16)(v2 + 1) >> 3)
                                                                + a1
                                                                + 1187)) != 0 )
        {
          _InterlockedAnd((volatile signed __int32 *)&v27 + 1, 0xFFFFFFFE);
          v4 = v27;
        }
        BYTE2(v27) = *(_BYTE *)(a1 + 2490);
      }
      else
      {
        v3 = *(unsigned __int16 **)(*(_QWORD *)(a1 + 128) + 8LL * v2);
        v4 = *v3;
        LOWORD(v27) = *v3;
        if ( *((_DWORD *)v3 + 1) == 102 )
        {
          _InterlockedAnd((volatile signed __int32 *)&v27 + 1, 0xFFFFFFFE);
          v4 = v27;
        }
        if ( *((_DWORD *)v3 + 2) == 116 )
        {
          _InterlockedOr((volatile signed __int32 *)&v27 + 1, 0x10u);
          v4 = v27;
        }
        DWORD1(v27) ^= (BYTE4(v27) ^ (unsigned __int8)(*((_BYTE *)v3 + 16) << 6)) & 0x40;
        DWORD1(v27) ^= (BYTE4(v27) ^ (unsigned __int8)(*((_BYTE *)v3 + 16) << 6)) & 0x80;
        BYTE2(v27) = *((_BYTE *)v3 + 3);
        if ( (unsigned __int8)(BYTE2(v27) - 1) > 4u )
          BYTE2(v27) = 5;
      }
      if ( v4 > *(_WORD *)(a1 + 148) )
        *(_WORD *)(a1 + 148) = v4;
      if ( v4 < *(_WORD *)(a1 + 146) )
        *(_WORD *)(a1 + 146) = v4;
      DWORD2(v27) = 512;
      PSM = HUBMUX_CreatePSM(a1, (unsigned __int16 *)&v27);
      if ( !PSM )
        break;
      v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, void *))(WdfFunctions_01015 + 1616))(
             WdfDriverGlobals,
             PSM,
             off_1C00662E8);
      *(_QWORD *)(v6 + 1248) = &PSM20StateTable;
      *(_DWORD *)(v6 + 1124) = 3000;
      *(_DWORD *)(v6 + 1256) = 3000;
      v7 = (_QWORD *)(v6 + 248);
      v8 = *(_QWORD **)(a1 + 2368);
      if ( *v8 != a1 + 2360 )
LABEL_57:
        __fastfail(3u);
      *v7 = a1 + 2360;
      ++v2;
      v7[1] = v8;
      *v8 = v7;
      *(_QWORD *)(a1 + 2368) = v7;
      ++*(_DWORD *)(a1 + 2356);
      if ( v2 >= *(_WORD *)(a1 + 144) )
        goto LABEL_19;
    }
  }
  else
  {
LABEL_19:
    v9 = 0;
    *(_DWORD *)(a1 + 152) = 0xFFFF;
    v10 = 0;
    if ( *(_WORD *)(a1 + 150) )
    {
      while ( 1 )
      {
        v27 = 0LL;
        v29 = 0LL;
        v28 = 0LL;
        _InterlockedOr((volatile signed __int32 *)&v27 + 1, 1u);
        if ( *(_BYTE *)(a1 + 240) )
        {
          v12 = v9 + 1;
          LOWORD(v27) = v9 + 1;
          if ( ((unsigned __int8)(1 << ((v9 + 1) & 7)) & *(_BYTE *)(((unsigned __int64)(unsigned __int16)(v9 + 1) >> 3)
                                                                  + a1
                                                                  + 1190)) != 0 )
          {
            _InterlockedAnd((volatile signed __int32 *)&v27 + 1, 0xFFFFFFFE);
            v12 = v27;
          }
          if ( *(_BYTE *)(a1 + 261) )
          {
            _InterlockedOr((volatile signed __int32 *)&v27 + 1, 0x100u);
            v12 = v27;
            DWORD1(v28) = *(_DWORD *)(a1 + 156);
          }
          *((_QWORD *)&v28 + 1) = *(_QWORD *)(a1 + 2504);
          LODWORD(v29) = *(_DWORD *)(a1 + 2512);
          BYTE2(v27) = *(_BYTE *)(a1 + 2490);
        }
        else
        {
          v11 = *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * v9);
          LOWORD(v27) = *(_WORD *)v11;
          if ( *(_DWORD *)(v11 + 4) == 102 )
            _InterlockedAnd((volatile signed __int32 *)&v27 + 1, 0xFFFFFFFE);
          if ( *(_DWORD *)(v11 + 8) == 116 )
            _InterlockedOr((volatile signed __int32 *)&v27 + 1, 8u);
          _InterlockedOr((volatile signed __int32 *)&v27 + 1, 0x100u);
          if ( *(_BYTE *)(v11 + 2) )
            DWORD1(v28) = *(_DWORD *)(a1 + 156);
          v12 = v27;
          *((_QWORD *)&v28 + 1) = *(_QWORD *)(v11 + 16);
          LODWORD(v29) = *(unsigned __int16 *)(v11 + 14);
          BYTE2(v27) = *(_BYTE *)(v11 + 3);
          if ( (unsigned __int8)(BYTE2(v27) - 1) > 4u )
            BYTE2(v27) = 5;
        }
        if ( v12 > *(_WORD *)(a1 + 154) )
          *(_WORD *)(a1 + 154) = v12;
        if ( v12 < *(_WORD *)(a1 + 152) )
          *(_WORD *)(a1 + 152) = v12;
        DWORD2(v27) = 768;
        v13 = HUBMUX_CreatePSM(a1, (unsigned __int16 *)&v27);
        if ( !v13 )
          break;
        v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, void *))(WdfFunctions_01015 + 1616))(
                WdfDriverGlobals,
                v13,
                off_1C00662E8);
        *(_QWORD *)(v14 + 1248) = &PSM30StateTable;
        *(_DWORD *)(v14 + 1124) = 5000;
        *(_DWORD *)(v14 + 1256) = 5000;
        v15 = (_QWORD *)(v14 + 248);
        v16 = *(_QWORD **)(a1 + 2368);
        if ( *v16 != a1 + 2360 )
          goto LABEL_57;
        *v15 = a1 + 2360;
        ++v9;
        v15[1] = v16;
        *v16 = v15;
        *(_QWORD *)(a1 + 2368) = v15;
        ++*(_DWORD *)(a1 + 2356);
        if ( v9 >= *(_WORD *)(a1 + 150) )
        {
          v10 = *(_WORD *)(a1 + 154);
          goto LABEL_42;
        }
      }
    }
    else
    {
LABEL_42:
      v17 = *(_WORD *)(a1 + 148);
      v18 = 2;
      if ( v17 <= v10 )
        v17 = v10;
      *(_WORD *)(a1 + 48) = v17;
      if ( ((unsigned __int64)v17 >> 3) + 1 >= 2 )
        v18 = (v17 >> 3) + 1;
      v19 = (unsigned int)ExDefaultNonPagedPoolType;
      if ( v18 <= *(_WORD *)(a1 + 88) )
        v18 = *(_WORD *)(a1 + 88);
      LODWORD(v30) = 56;
      v20 = *(_QWORD *)(a1 + 16);
      *(_WORD *)(a1 + 1128) = v18;
      *(_QWORD *)&v32 = v20;
      *((_QWORD *)&v31 + 1) = 0x100000001LL;
      if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64, __int64, unsigned __int64, __int64 *, __int64))(WdfFunctions_01015 + 1536))(
             WdfDriverGlobals,
             &v30,
             v19,
             1748191317LL,
             (v18 + 3LL) & 0xFFFFFFFFFFFFFFFCuLL,
             &v34,
             a1 + 1120) >= 0 )
      {
        v21 = 2053;
        _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x40u);
        return v21;
      }
    }
  }
  v23 = (_QWORD **)(a1 + 2360);
  v21 = 2045;
  while ( 1 )
  {
    v26 = *v23;
    if ( *v23 == v23 )
      return v21;
    if ( (_QWORD **)v26[1] != v23 )
      goto LABEL_57;
    v24 = (_QWORD *)*v26;
    if ( *(_QWORD **)(*v26 + 8LL) != v26 )
      goto LABEL_57;
    *v23 = v24;
    v24[1] = v23;
    --*(_DWORD *)(a1 + 2356);
    v25 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *))(WdfFunctions_01015 + 1632))(
            WdfDriverGlobals,
            v26 - 31);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, v25);
  }
}
