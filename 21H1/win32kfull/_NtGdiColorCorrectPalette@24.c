/*
 * XREFs of _NtGdiColorCorrectPalette@24 @ 0x21BFC4
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QAE@PAUHDC__@@@Z @ 0x579AC (--0DCOBJ@@QAE@PAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QAE@XZ @ 0x5E67A (--1DCOBJ@@QAE@XZ.c)
 *     ?ulGetEntries@XEPALOBJ@@QAEKKKPAUtagPALETTEENTRY@@H@Z @ 0xAD8F8 (-ulGetEntries@XEPALOBJ@@QAEKKKPAUtagPALETTEENTRY@@H@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     ?ulSetEntries@XEPALOBJ@@QAEKKKPBUtagPALETTEENTRY@@@Z @ 0x22337C (-ulSetEntries@XEPALOBJ@@QAEKKKPBUtagPALETTEENTRY@@@Z.c)
 */

unsigned int __stdcall NtGdiColorCorrectPalette(
        HDC a1,
        int a2,
        unsigned int a3,
        unsigned int a4,
        struct tagPALETTEENTRY *Address,
        int a6)
{
  int v6; // edx
  HDC v7; // eax
  unsigned int v8; // ebx
  unsigned int v9; // esi
  unsigned int v10; // ecx
  unsigned int v11; // edi
  unsigned int Entries; // eax
  unsigned int v13; // eax
  _DWORD v15[3]; // [esp+10h] [ebp-28h] BYREF
  unsigned int v16; // [esp+1Ch] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+20h] [ebp-18h]

  DCOBJ::DCOBJ((DCOBJ *)v15, a1);
  LOBYTE(v6) = 8;
  v7 = (HDC)HmgShareLockCheck(a2, v6);
  a1 = v7;
  v8 = 0;
  v16 = 0;
  if ( !v15[0] || !v7 )
    goto LABEL_21;
  v9 = a4;
  if ( !a4 || (v10 = *((_DWORD *)v7 + 5), a4 > v10) || a4 > 0x3FFFFFFF || (v11 = a3, a3 > v10) || a3 + a4 > v10 )
  {
    EngSetLastError(0x57u);
    DEC_SHARE_REF_CNT(a1);
    DCOBJ::~DCOBJ((DCOBJ *)v15);
    return 0;
  }
  if ( (*(_DWORD *)(v15[0] + 80) & 1) == 0 )
  {
LABEL_21:
    EngSetLastError(0x57u);
    goto LABEL_22;
  }
  if ( !a6 )
  {
    ms_exc.registration.TryLevel = 0;
    ProbeForWrite(Address, 4 * a4, 4u);
    Entries = XEPALOBJ::ulGetEntries((XEPALOBJ *)&a1, v11, v9, Address, 0);
LABEL_19:
    v8 = Entries;
    v16 = Entries;
    ms_exc.registration.TryLevel = -2;
    goto LABEL_22;
  }
  if ( a6 == 1 )
  {
    ms_exc.registration.TryLevel = 1;
    v13 = a4;
    if ( 4 * a4 )
    {
      if ( ((unsigned __int8)Address & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned int)&Address[v13] > _MmUserProbeAddress || &Address[v13] < Address )
        *(_BYTE *)_MmUserProbeAddress = 0;
    }
    Entries = XEPALOBJ::ulSetEntries((XEPALOBJ *)&a1, v11, v9, Address);
    goto LABEL_19;
  }
LABEL_22:
  if ( a1 )
    DEC_SHARE_REF_CNT(a1);
  DCOBJ::~DCOBJ((DCOBJ *)v15);
  return v8;
}
