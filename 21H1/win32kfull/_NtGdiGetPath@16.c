/*
 * XREFs of _NtGdiGetPath@16 @ 0x21186F
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QAE@PAUHDC__@@@Z @ 0x579AC (--0DCOBJ@@QAE@PAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QAE@XZ @ 0x5E67A (--1DCOBJ@@QAE@XZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z @ 0x943B6 (-vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z.c)
 *     ??1XEPATHOBJ@@QAE@XZ @ 0xF6DBB (--1XEPATHOBJ@@QAE@XZ.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     ??0XEPATHOBJ@@QAE@PAUHPATH__@@@Z @ 0x1E4555 (--0XEPATHOBJ@@QAE@PAUHPATH__@@@Z.c)
 *     ?bInactive@DC@@QBEHXZ @ 0x2113DA (-bInactive@DC@@QBEHXZ.c)
 */

int __stdcall NtGdiGetPath(HDC a1, struct _POINTL *Address, char *a3, int Length)
{
  int v4; // ebx
  signed int v5; // eax
  char *v6; // edi
  SIZE_T v7; // eax
  char *v8; // edx
  char flags; // cl
  char v10; // al
  _DWORD v12[2]; // [esp+10h] [ebp-88h] BYREF
  int v13; // [esp+18h] [ebp-80h]
  _DWORD v14[3]; // [esp+54h] [ebp-44h] BYREF
  DC *v15[3]; // [esp+60h] [ebp-38h] BYREF
  struct _PATHDATA v16; // [esp+6Ch] [ebp-2Ch] BYREF
  int v17; // [esp+78h] [ebp-20h]
  char *v18; // [esp+7Ch] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+80h] [ebp-18h]
  HDC v20; // [esp+A0h] [ebp+8h]
  SIZE_T Lengtha; // [esp+ACh] [ebp+14h]

  v4 = -1;
  DCOBJ::DCOBJ((DCOBJ *)v15, a1);
  if ( !v15[0] || Length < 0 )
    goto LABEL_30;
  if ( !DC::bInactive(v15[0]) )
  {
    EngSetLastError(0x3EBu);
    goto LABEL_31;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v14, (struct XDCOBJ *)v15, 1026);
  if ( !v14[0] )
  {
LABEL_30:
    EngSetLastError(0x57u);
    goto LABEL_31;
  }
  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v12, *((struct HPATH__ **)v15[0] + 34));
  if ( !v13 )
  {
    EngSetLastError(0x57u);
    goto LABEL_28;
  }
  v5 = EPATHOBJ::cTotalPts((EPATHOBJ *)v12);
  v4 = v5;
  if ( !Length )
    goto LABEL_28;
  if ( Length < v5 || (unsigned int)Length > 0x1FFFFFFF )
  {
    EngSetLastError(0x57u);
    v4 = -1;
    goto LABEL_28;
  }
  memset(&v16, 0, sizeof(v16));
  v12[0] &= ~8u;
  *(_DWORD *)(v13 + 52) = *(_DWORD *)(v13 + 20);
  ms_exc.registration.TryLevel = 0;
  ProbeForWrite(Address, 8 * Length, 4u);
  v6 = a3;
  ProbeForWrite(a3, Length, 4u);
  v18 = a3;
  v20 = (HDC)&a3[Length];
  while ( 1 )
  {
    v7 = EPATHOBJ::bEnum((EPATHOBJ *)v12, &v16);
    Lengtha = v7;
    if ( v16.count )
      break;
LABEL_24:
    if ( !v7 )
      goto LABEL_25;
  }
  if ( EXFORMOBJ::bXform((EXFORMOBJ *)v14, v16.pptfx, Address, v16.count) )
  {
    Address += v16.count;
    v8 = &v6[v16.count];
    flags = v16.flags;
    if ( (v16.flags & 1) != 0 && v6 < (char *)v20 )
    {
      *v6++ = 6;
      flags = v16.flags;
    }
    v10 = (flags & 0x10) != 0 ? 4 : 2;
    if ( v8 <= (char *)v20 )
    {
      while ( v6 < v8 )
      {
        *v6++ = v10;
        flags = v16.flags;
      }
    }
    if ( (flags & 8) != 0 && v6 > v18 && v6 <= (char *)v20 )
      *(v6 - 1) |= 1u;
    v7 = Lengtha;
    goto LABEL_24;
  }
  EngSetLastError(0x216u);
  v4 = -1;
  v17 = -1;
LABEL_25:
  ms_exc.registration.TryLevel = -2;
LABEL_28:
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v12);
LABEL_31:
  DCOBJ::~DCOBJ((DCOBJ *)v15);
  return v4;
}
