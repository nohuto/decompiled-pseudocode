/*
 * XREFs of ?GetEntryObject@GdiHandleEntryDirectory@@QEAAPEAVOBJECT@@I@Z @ 0x1C008B180
 * Callers:
 *     ??0DCMEMOBJ@@QEAA@KHH@Z @ 0x1C007FF40 (--0DCMEMOBJ@@QEAA@KHH@Z.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C008C520 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     _GetDCEx @ 0x1C008DE30 (_GetDCEx.c)
 * Callees:
 *     <none>
 */

struct OBJECT *__fastcall GdiHandleEntryDirectory::GetEntryObject(GdiHandleEntryDirectory *this, unsigned int a2)
{
  unsigned int v2; // r8d
  __int64 v3; // r10
  __int64 v4; // r9
  __int64 v5; // r11

  v2 = *((_DWORD *)this + 514);
  if ( a2 >= v2 + ((*((unsigned __int16 *)this + 1) + 0xFFFF) << 16) )
    return 0LL;
  v3 = 0LL;
  v4 = ((a2 - v2) >> 16) + 1;
  if ( a2 < v2 )
    v4 = 0LL;
  v5 = *((_QWORD *)this + v4 + 1);
  if ( (_DWORD)v4 )
    a2 += ((1 - (_DWORD)v4) << 16) - v2;
  if ( a2 < *(_DWORD *)(v5 + 20) )
    return *(struct OBJECT **)(*(_QWORD *)(**(_QWORD **)(v5 + 24) + 8 * ((unsigned __int64)a2 >> 8))
                             + 16LL * (unsigned __int8)a2
                             + 8);
  return (struct OBJECT *)v3;
}
