/*
 * XREFs of _NtGdiGetWidthTable@28 @ 0x85948
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QAE@PAUHDC__@@@Z @ 0x579AC (--0DCOBJ@@QAE@PAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QAE@XZ @ 0x5E67A (--1DCOBJ@@QAE@XZ.c)
 *     ?bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z @ 0x64130 (-bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 *     ?bGetWidthTable@RFONTOBJ@@QAEHAAVXDCOBJ@@KPAGK1@Z @ 0x86D0C (-bGetWidthTable@RFONTOBJ@@QAEHAAVXDCOBJ@@KPAGK1@Z.c)
 *     ?bGetWidthData@RFONTOBJ@@QAEHPAU_WIDTHDATA@@AAVXDCOBJ@@@Z @ 0x881C4 (-bGetWidthData@RFONTOBJ@@QAEHPAU_WIDTHDATA@@AAVXDCOBJ@@@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __stdcall NtGdiGetWidthTable(
        HDC a1,
        unsigned int a2,
        char *Src,
        unsigned __int16 *a4,
        volatile void *Address,
        ULONG a6,
        ULONG a7)
{
  int WidthTable; // edi
  unsigned int v8; // esi
  int v9; // ecx
  int v10; // eax
  unsigned __int16 *v11; // edi
  int v12; // eax
  unsigned __int16 *v13; // edi
  int i; // ecx
  SIZE_T v15; // esi
  int v16; // ecx
  _DWORD *v17; // ecx
  int v19; // [esp+10h] [ebp-44h] BYREF
  int v20; // [esp+14h] [ebp-40h]
  int v21; // [esp+18h] [ebp-3Ch]
  int v22; // [esp+1Ch] [ebp-38h]
  _DWORD v23[4]; // [esp+20h] [ebp-34h] BYREF
  int v24; // [esp+30h] [ebp-24h]
  unsigned __int16 *v25; // [esp+34h] [ebp-20h]
  int v26; // [esp+38h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+3Ch] [ebp-18h]

  WidthTable = -1;
  v26 = -1;
  v23[3] = -1;
  DCOBJ::DCOBJ((DCOBJ *)v23, a1);
  v8 = (unsigned int)a4;
  if ( !a4 || !v23[0] )
    goto LABEL_39;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v24 = 0;
  a4 = 0;
  v25 = 0;
  if ( v8 <= 0x9C4000 )
    a4 = (unsigned __int16 *)AllocFreeTmpBuffer(4 * v8);
  if ( a4 )
  {
    v9 = 2 * v8;
    v25 = &a4[v8];
    ms_exc.registration.TryLevel = 0;
    if ( 2 * v8 )
    {
      if ( ((unsigned __int8)Src & 1) != 0 )
        goto LABEL_8;
      if ( (unsigned int)&Src[v9] > _MmUserProbeAddress || &Src[v9] < Src )
        *(_BYTE *)_MmUserProbeAddress = 0;
    }
    memcpy(v25, Src, 2 * v8);
    ms_exc.registration.TryLevel = -2;
  }
  else
  {
    v8 = 0;
  }
  WidthTable = v26;
  if ( v8 )
  {
    a1 = 0;
    if ( RFONTOBJ::bInit((RFONTOBJ *)&a1, (struct XDCOBJ *)v23, 0, 2u) )
      GreAcquireSemaphore(*((_DWORD *)a1 + 137));
    if ( !a1 )
      goto LABEL_27;
    v24 = *((_DWORD *)a1 + 178);
    if ( *((_DWORD *)a1 + 87) >= 0xFFFu )
      goto LABEL_27;
    v10 = *((_DWORD *)a1 + 79);
    if ( v10 )
    {
      v11 = a4;
      v12 = ((unsigned __int16)(16 * v10) << 16) | (unsigned __int16)(16 * v10);
      memset32(a4, v12, v8 >> 1);
      v13 = &v11[2 * (v8 >> 1)];
      for ( i = v8 & 1; i; --i )
        *v13++ = v12;
      WidthTable = 1;
      v26 = 1;
    }
    else
    {
      WidthTable = RFONTOBJ::bGetWidthTable((RFONTOBJ *)&a1, (struct XDCOBJ *)v23, a2, v25, v8, a4);
      v26 = WidthTable;
      if ( WidthTable == -1 )
      {
LABEL_27:
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&a1);
        goto LABEL_28;
      }
    }
    if ( !RFONTOBJ::bGetWidthData((RFONTOBJ *)&a1, (struct _WIDTHDATA *)&v19, (struct XDCOBJ *)v23) )
    {
      WidthTable = -1;
      v26 = -1;
    }
    goto LABEL_27;
  }
LABEL_28:
  if ( WidthTable != -1 )
  {
    ms_exc.registration.TryLevel = 1;
    v15 = 2 * v8;
    ProbeForWrite(Address, v15, 2u);
    memcpy((void *)Address, a4, v15);
    v16 = a6;
    if ( a6 )
    {
      if ( (a6 & 3) != 0 )
LABEL_8:
        ExRaiseDatatypeMisalignment();
      if ( a6 >= _MmUserProbeAddress )
        *(_BYTE *)_MmUserProbeAddress = 0;
      *(_BYTE *)v16 = *(_BYTE *)v16;
      *(_BYTE *)(v16 + 12) = *(_BYTE *)(v16 + 12);
      *(_DWORD *)v16 = v19;
      *(_DWORD *)(v16 + 4) = v20;
      *(_DWORD *)(v16 + 8) = v21;
      *(_DWORD *)(v16 + 12) = v22;
      WidthTable = v26;
    }
    v17 = (_DWORD *)a7;
    if ( a7 >= _MmUserProbeAddress )
      v17 = (_DWORD *)_MmUserProbeAddress;
    *v17 = v24;
    ms_exc.registration.TryLevel = -2;
  }
  if ( a4 )
    FreeTmpBuffer(a4);
LABEL_39:
  DCOBJ::~DCOBJ((DCOBJ *)v23);
  return WidthTable;
}
