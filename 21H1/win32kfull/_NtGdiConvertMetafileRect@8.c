/*
 * XREFs of _NtGdiConvertMetafileRect@8 @ 0x21D8F8
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QAE@PAUHDC__@@@Z @ 0x579AC (--0DCOBJ@@QAE@PAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QAE@XZ @ 0x5E67A (--1DCOBJ@@QAE@XZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z @ 0x943B6 (-vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 */

int __stdcall NtGdiConvertMetafileRect(HDC a1, ULONG a2)
{
  struct _POINTL *v2; // ecx
  int v3; // ebx
  FIX v4; // edx
  FIX v5; // ecx
  FIX v6; // eax
  FIX v7; // esi
  FIX v8; // edi
  FIX v9; // eax
  FIX v10; // edi
  struct _POINTL *v11; // ecx
  _DWORD v13[3]; // [esp+10h] [ebp-60h] BYREF
  _DWORD v14[3]; // [esp+1Ch] [ebp-54h] BYREF
  ULONG v15; // [esp+28h] [ebp-48h]
  HDC v16; // [esp+2Ch] [ebp-44h]
  int v17; // [esp+30h] [ebp-40h]
  struct _POINTL v18; // [esp+34h] [ebp-3Ch] BYREF
  LONG x; // [esp+3Ch] [ebp-34h]
  LONG y; // [esp+40h] [ebp-30h]
  struct _POINTFIX v21; // [esp+44h] [ebp-2Ch] BYREF
  FIX v22; // [esp+4Ch] [ebp-24h]
  FIX v23; // [esp+50h] [ebp-20h]
  CPPEH_RECORD ms_exc; // [esp+58h] [ebp-18h]

  v16 = a1;
  v2 = (struct _POINTL *)a2;
  v15 = a2;
  v17 = 0;
  v18.x = 0;
  v18.y = 0;
  x = 0;
  y = 0;
  ms_exc.registration.TryLevel = 0;
  if ( a2 >= _MmUserProbeAddress )
    v2 = (struct _POINTL *)_MmUserProbeAddress;
  v18 = *v2;
  x = v2[1].x;
  y = v2[1].y;
  v3 = 2;
  v17 = 2;
  ms_exc.registration.TryLevel = -2;
  DCOBJ::DCOBJ((DCOBJ *)v13, v16);
  if ( !v13[0] )
    goto LABEL_19;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v14, (struct XDCOBJ *)v13, 516);
  if ( !v14[0] || !EXFORMOBJ::bXform((EXFORMOBJ *)v14, &v18, &v21, 2u) )
    goto LABEL_19;
  v4 = v21.x;
  v5 = v22;
  if ( v21.x > v22 )
  {
    v6 = v21.x;
    v4 = v22;
    v21.x = v22;
    v5 = v6;
  }
  v7 = v21.y;
  v8 = v23;
  if ( v21.y > v23 )
  {
    v9 = v21.y;
    v7 = v23;
    v21.y = v23;
    v8 = v9;
  }
  v22 = v5 - 16;
  v10 = v8 - 16;
  v23 = v10;
  if ( v5 - 16 < v4 || v10 < v7 )
    v3 = 1;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v14, (struct XDCOBJ *)v13, 1026);
  if ( v14[0] && EXFORMOBJ::bXform((EXFORMOBJ *)v14, &v21, &v18, 2u) )
  {
    ms_exc.registration.TryLevel = 1;
    v11 = (struct _POINTL *)v15;
    if ( v15 >= _MmUserProbeAddress )
      v11 = (struct _POINTL *)_MmUserProbeAddress;
    *v11 = v18;
    v11[1].x = x;
    v11[1].y = y;
    ms_exc.registration.TryLevel = -2;
  }
  else
  {
LABEL_19:
    v3 = 0;
  }
  DCOBJ::~DCOBJ((DCOBJ *)v13);
  if ( !v3 )
    EngSetLastError(0x57u);
  return v3;
}
