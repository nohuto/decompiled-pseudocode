/*
 * XREFs of GreExtEscape @ 0x1C0016EE0
 * Callers:
 *     NtGdiExtEscape @ 0x1C0015550 (NtGdiExtEscape.c)
 *     ?GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z @ 0x1C013FB68 (-GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z.c)
 * Callees:
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C0016F7C (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0076414 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0079EB0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0XFERDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C027C194 (--0XFERDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall GreExtEscape(HDC a1, int a2, int a3, char *a4, unsigned int a5, char *a6)
{
  unsigned int v10; // ebx
  _QWORD v12[2]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v13[2]; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v14[32]; // [rsp+50h] [rbp-30h] BYREF
  int v15; // [rsp+70h] [rbp-10h]

  DCOBJ::DCOBJ((DCOBJ *)v12, a1);
  v10 = 0;
  if ( v12[0] )
  {
    v10 = GreExtEscapeInternal((struct DCOBJ *)v12, a2, a3, a4, a5, a6);
  }
  else
  {
    XFERDCOBJ::XFERDCOBJ((XFERDCOBJ *)v13, a1);
    if ( v13[0] )
      v10 = GreExtEscapeInternal((struct DCOBJ *)v13, a2, a3, a4, a5, a6);
    if ( v15 )
      PopThreadGuardedObject(v14);
    if ( v13[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v13);
  }
  if ( v12[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v12);
  return v10;
}
