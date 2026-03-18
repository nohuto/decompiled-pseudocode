/*
 * XREFs of ?bBitBlt@BLTRECORD@@QAEHAAVDCOBJ@@0KJJ@Z @ 0x1EF8C8
 * Callers:
 *     ?bStretch@BLTRECORD@@QAEHAAVDCOBJ@@0KE@Z @ 0x7AB9E (-bStretch@BLTRECORD@@QAEHAAVDCOBJ@@0KE@Z.c)
 * Callees:
 *     ?bBitBlt@BLTRECORD@@QAEHAAVDCOBJ@@0K@Z @ 0x79928 (-bBitBlt@BLTRECORD@@QAEHAAVDCOBJ@@0K@Z.c)
 */

int __thiscall BLTRECORD::bBitBlt(BLTRECORD *this, struct DCOBJ *a2, struct DCOBJ *a3, char a4, int a5, int a6)
{
  int *v7; // eax
  int *v8; // edx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // ebx
  int v17; // eax
  _DWORD *v18; // ebx
  int v19; // eax
  int v20; // [esp+10h] [ebp-2Ch]
  int v21; // [esp+10h] [ebp-2Ch]
  int v22; // [esp+10h] [ebp-2Ch]
  int v23; // [esp+14h] [ebp-28h]
  int v24; // [esp+14h] [ebp-28h]
  int v25; // [esp+14h] [ebp-28h]
  int v26; // [esp+18h] [ebp-24h]
  int v27; // [esp+18h] [ebp-24h]
  int v28; // [esp+18h] [ebp-24h]
  int v29; // [esp+1Ch] [ebp-20h]
  int v30; // [esp+1Ch] [ebp-20h]
  int v31; // [esp+1Ch] [ebp-20h]
  int v32; // [esp+20h] [ebp-1Ch]
  int v33; // [esp+20h] [ebp-1Ch]
  int v34; // [esp+20h] [ebp-1Ch]
  int v35; // [esp+24h] [ebp-18h]
  int v36; // [esp+24h] [ebp-18h]
  int v37; // [esp+24h] [ebp-18h]
  int v38; // [esp+28h] [ebp-14h]
  int v39; // [esp+28h] [ebp-14h]
  int v40; // [esp+28h] [ebp-14h]
  int v41; // [esp+2Ch] [ebp-10h]
  int v42; // [esp+2Ch] [ebp-10h]
  int v43; // [esp+2Ch] [ebp-10h]
  _DWORD *v44; // [esp+30h] [ebp-Ch]
  int v46; // [esp+44h] [ebp+8h]
  int v47; // [esp+44h] [ebp+8h]
  int v48; // [esp+44h] [ebp+8h]
  _DWORD *v49; // [esp+50h] [ebp+14h]
  int v50; // [esp+54h] [ebp+18h]

  if ( a5 == -1 )
  {
    --*((_DWORD *)this + 33);
  }
  else if ( a5 )
  {
    if ( a5 != 1 )
      return 0;
    --*((_DWORD *)this + 27);
    v7 = (int *)((char *)this + 100);
    v8 = (int *)((char *)this + 124);
    v49 = (_DWORD *)((char *)this + 100);
    v44 = (_DWORD *)((char *)this + 124);
    if ( a6 == 1 )
    {
      --*((_DWORD *)this + 28);
      v20 = *v7;
      v23 = *((_DWORD *)this + 26);
      v26 = *((_DWORD *)this + 27);
      v29 = *((_DWORD *)this + 28);
      v32 = *v8;
      v35 = *((_DWORD *)this + 32);
      v38 = *((_DWORD *)this + 33);
      v41 = *((_DWORD *)this + 34);
      v10 = BLTRECORD::bBitBlt(this, a2, a3, a4);
      *v44 = v32;
      v46 = v10;
      v44[1] = v35;
      v44[2] = v38;
      v44[3] = v41;
      *v49 = v20;
      v49[1] = v23;
      v49[2] = v26;
      v49[3] = v29;
      v11 = *((_DWORD *)this + 27);
      *v49 = v11;
      *((_DWORD *)this + 27) = v11 + 1;
      *((_DWORD *)this + 31) = *((_DWORD *)this + 33) - 1;
      v12 = BLTRECORD::bBitBlt(this, a2, a3, a4);
      *((_DWORD *)this + 31) = v32;
      v47 = v12 & v46;
      *((_DWORD *)this + 32) = v35;
      *((_DWORD *)this + 33) = v38;
      *((_DWORD *)this + 34) = v41;
      *v49 = v20;
      v49[1] = v23;
      v49[2] = v26;
      v49[3] = v29;
      v13 = *((_DWORD *)this + 28);
      *((_DWORD *)this + 26) = v13;
      *((_DWORD *)this + 28) = v13 + 1;
      *((_DWORD *)this + 32) = *((_DWORD *)this + 34) - 1;
      v48 = BLTRECORD::bBitBlt(this, a2, a3, a4) & v47;
      *v44 = v32;
      v44[1] = v35;
      v44[2] = v38;
      v44[3] = v41;
      *v49 = v20;
      v49[1] = v23;
      v49[2] = v26;
      v49[3] = v29;
      v14 = *((_DWORD *)this + 28);
      *((_DWORD *)this + 26) = v14;
      *((_DWORD *)this + 28) = v14 + 1;
      *((_DWORD *)this + 32) = *((_DWORD *)this + 34) - 1;
      v15 = *((_DWORD *)this + 27);
      *v49 = v15;
      *((_DWORD *)this + 27) = v15 + 1;
      *((_DWORD *)this + 31) = *((_DWORD *)this + 33) - 1;
      return v48 & BLTRECORD::bBitBlt(this, a2, a3, a4);
    }
    else
    {
      *((_DWORD *)this + 34) += a6;
      v21 = *v7;
      v24 = *((_DWORD *)this + 26);
      v27 = *((_DWORD *)this + 27);
      v30 = *((_DWORD *)this + 28);
      v33 = *v8;
      v36 = *((_DWORD *)this + 32);
      v39 = *((_DWORD *)this + 33);
      v42 = *((_DWORD *)this + 34);
      v16 = BLTRECORD::bBitBlt(this, a2, a3, a4);
      *v44 = v33;
      v44[1] = v36;
      v44[2] = v39;
      v44[3] = v42;
      *v49 = v21;
      v49[1] = v24;
      v49[2] = v27;
      v49[3] = v30;
      v17 = *((_DWORD *)this + 27);
      *v49 = v17;
      *((_DWORD *)this + 27) = v17 + 1;
      *((_DWORD *)this + 31) = *((_DWORD *)this + 33) - 1;
      return v16 & BLTRECORD::bBitBlt(this, a2, a3, a4);
    }
  }
  if ( a6 == 1 )
  {
    --*((_DWORD *)this + 28);
    v22 = *((_DWORD *)this + 25);
    v18 = (_DWORD *)((char *)this + 124);
    v25 = *((_DWORD *)this + 26);
    v28 = *((_DWORD *)this + 27);
    v31 = *((_DWORD *)this + 28);
    v34 = *((_DWORD *)this + 31);
    v37 = *((_DWORD *)this + 32);
    v40 = *((_DWORD *)this + 33);
    v43 = *((_DWORD *)this + 34);
    v50 = BLTRECORD::bBitBlt(this, a2, a3, a4);
    *v18 = v34;
    v18[1] = v37;
    v18[2] = v40;
    v18[3] = v43;
    *((_DWORD *)this + 25) = v22;
    *((_DWORD *)this + 26) = v25;
    *((_DWORD *)this + 27) = v28;
    *((_DWORD *)this + 28) = v31;
    v19 = *((_DWORD *)this + 28);
    *((_DWORD *)this + 26) = v19;
    *((_DWORD *)this + 28) = v19 + 1;
    *((_DWORD *)this + 32) = *((_DWORD *)this + 34) - 1;
    return v50 & BLTRECORD::bBitBlt(this, a2, a3, a4);
  }
  else
  {
    *((_DWORD *)this + 34) += a6;
    return BLTRECORD::bBitBlt(this, a2, a3, a4);
  }
}
