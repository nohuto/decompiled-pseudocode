/*
 * XREFs of _NtGdiPolyPatBlt@20 @ 0x56AE8
 * Callers:
 *     <none>
 * Callees:
 *     ?vOrder@ERECTL@@QAEXXZ @ 0x4E19C (-vOrder@ERECTL@@QAEXXZ.c)
 *     ?bEmpty@ERECTL@@QBEHXZ @ 0x4F396 (-bEmpty@ERECTL@@QBEHXZ.c)
 *     ?GrePolyPatBltInternal@@YGHAAVXDCOBJ@@KPAU_POLYPATBLT@@KKKKKK@Z @ 0x57040 (-GrePolyPatBltInternal@@YGHAAVXDCOBJ@@KPAU_POLYPATBLT@@KKKKKK@Z.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ??_5ERECTL@@QAEXABU_RECTL@@@Z @ 0x93A0E (--_5ERECTL@@QAEXABU_RECTL@@@Z.c)
 *     ??0DWMSCREENREADMODIFYWRITEASSIST@@QAE@AAVXDCOBJ@@@Z @ 0xF701E (--0DWMSCREENREADMODIFYWRITEASSIST@@QAE@AAVXDCOBJ@@@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     ?bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QAEHPBU_RECTL@@@Z @ 0x1F4842 (-bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QAEHPBU_RECTL@@@Z.c)
 */

int __stdcall NtGdiPolyPatBlt(HDC a1, __int16 a2, struct XDCOBJ *a3, unsigned int a4, struct _POLYPATBLT *a5)
{
  int v5; // esi
  unsigned int v6; // edi
  int v7; // eax
  int v8; // ecx
  struct _DC_ATTR *UserAttr; // eax
  int v10; // edi
  unsigned int v12; // eax
  int v13; // esi
  int v14; // edi
  int v15; // ecx
  int v16; // ecx
  unsigned int v17; // eax
  const struct _RECTL *v18; // ecx
  int v19; // eax
  unsigned int v20; // [esp+0h] [ebp-98h]
  unsigned int v21; // [esp+4h] [ebp-94h]
  _BYTE v22[20]; // [esp+10h] [ebp-88h] BYREF
  int *v23; // [esp+24h] [ebp-74h]
  _DWORD v24[4]; // [esp+48h] [ebp-50h] BYREF
  int v25; // [esp+58h] [ebp-40h] BYREF
  int v26; // [esp+5Ch] [ebp-3Ch]
  int v27; // [esp+60h] [ebp-38h]
  int v28; // [esp+64h] [ebp-34h]
  DC *v29; // [esp+68h] [ebp-30h] BYREF
  int v30; // [esp+6Ch] [ebp-2Ch]
  int v31; // [esp+70h] [ebp-28h]
  int BackRect; // [esp+74h] [ebp-24h]
  unsigned int v33; // [esp+78h] [ebp-20h]
  int v34; // [esp+7Ch] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+80h] [ebp-18h]

  v5 = 1;
  v34 = 1;
  BackRect = 0;
  v6 = a4;
  if ( !a4 )
    goto LABEL_23;
  if ( !a3 )
  {
    v5 = 0;
    goto LABEL_23;
  }
  v30 = 0;
  v31 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v29, a1);
  if ( !v29 )
  {
    v5 = 0;
    EngSetLastError(6u);
    goto LABEL_23;
  }
  if ( v6 > 0xCCCCCCC )
  {
    v5 = 0;
    v34 = 0;
  }
  else
  {
    ms_exc.registration.TryLevel = 0;
    v7 = 20 * v6;
    if ( 20 * v6 )
    {
      if ( ((unsigned __int8)a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned int)a3 + v7 > _MmUserProbeAddress || (struct XDCOBJ *)((char *)a3 + v7) < a3 )
        *(_BYTE *)_MmUserProbeAddress = 0;
    }
    ms_exc.registration.TryLevel = -2;
  }
  if ( v5 )
  {
    if ( (((unsigned __int8)gajRop3[(unsigned __int8)a2] | (unsigned __int8)gajRop3[HIBYTE(a2)]) & 0xB2) == 0
      || (DWMSCREENREADMODIFYWRITEASSIST::DWMSCREENREADMODIFYWRITEASSIST(
            (DWMSCREENREADMODIFYWRITEASSIST *)v22,
            (struct XDCOBJ *)&v29),
          (v8 = *v23) == 0)
      || !*(_DWORD *)(v8 + 500)
      || (*(_DWORD *)(v8 + 24) & 0x4000) == 0 )
    {
LABEL_14:
      v5 = GrePolyPatBltInternal(
             a3,
             a4,
             a5,
             *(_DWORD *)(*((_DWORD *)v29 + 255) + 204),
             *(struct SURFACE **)(*((_DWORD *)v29 + 255) + 196),
             *(_DWORD *)(*((_DWORD *)v29 + 255) + 208),
             *(_DWORD *)(*((_DWORD *)v29 + 255) + 200),
             v20,
             v21);
      goto LABEL_15;
    }
    ms_exc.registration.TryLevel = 1;
    v12 = 0;
    v33 = 0;
    while ( v12 < a4 )
    {
      v13 = *((_DWORD *)a3 + 5 * v12 + 1);
      v14 = v13 + *((_DWORD *)a3 + 5 * v12 + 3);
      v15 = *((_DWORD *)a3 + 5 * v12 + 2);
      v25 = *((_DWORD *)a3 + 5 * v12);
      v26 = v13;
      v27 = v25 + v15;
      v28 = v14;
      ERECTL::vOrder((ERECTL *)&v25);
      v17 = v33;
      if ( v33 )
      {
        ERECTL::operator|=(v16);
        v17 = v33;
      }
      else
      {
        v24[0] = v25;
        v24[1] = v26;
        v24[2] = v27;
        v24[3] = v28;
      }
      v12 = v17 + 1;
      v33 = v12;
    }
    ms_exc.registration.TryLevel = -2;
    if ( v34 )
    {
      if ( !ERECTL::bEmpty((ERECTL *)v24) )
        BackRect = DWMSCREENREADMODIFYWRITEASSIST::bReadBackRect((DWMSCREENREADMODIFYWRITEASSIST *)v22, v18);
      goto LABEL_14;
    }
  }
  v5 = v34;
LABEL_15:
  if ( v30 && (*((_BYTE *)v29 + 32) & 2) != 0 )
  {
    if ( !v31 )
    {
      UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v29);
      if ( UserAttr )
        DC::RestoreAttributes(v29, UserAttr);
    }
    *((_DWORD *)v29 + 8) &= ~2u;
    v30 = 0;
  }
  a1 = 0;
  v10 = *(_DWORD *)v29;
  HmgDecrementExclusiveReferenceCountEx(v29, v31, &a1);
  if ( a1 )
    bDeleteDCInternalEx(v10, 0);
LABEL_23:
  if ( BackRect )
  {
    v19 = UserReferenceDwmApiPort();
    DwmSyncFlushAndWaitForBatch(v19);
  }
  return v5;
}
