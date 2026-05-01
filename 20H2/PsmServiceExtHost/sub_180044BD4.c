/*
 * XREFs of sub_180044BD4 @ 0x180044BD4
 * Callers:
 *     DllEntryPoint @ 0x180044B90 (DllEntryPoint.c)
 * Callees:
 *     sub_18004494C @ 0x18004494C (sub_18004494C.c)
 *     _XcptFilter @ 0x180044F11 (_XcptFilter.c)
 *     sub_1800450FC @ 0x1800450FC (sub_1800450FC.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180044BD4(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  unsigned int v5; // ebx
  int v6; // eax

  v3 = a2;
  v5 = 1;
  if ( (unsigned int)a2 <= 1 )
    dword_1800B34A0 = a2;
  if ( (_DWORD)a2 || dword_1800B3680 )
  {
    if ( (unsigned int)(a2 - 1) > 1 )
      goto LABEL_13;
    if ( qword_1800B3D38 )
    {
      v6 = dword_1800B3684;
      if ( (_DWORD)a2 == 1 )
        v6 = 1;
      dword_1800B3684 = v6;
      v5 = qword_1800B3D38(a1, a2, a3);
    }
    if ( v5 )
    {
      v5 = sub_18004494C(a1, v3, a3);
      if ( v5 )
      {
LABEL_13:
        v5 = sub_1800450FC(a1, v3, a3);
        if ( v3 == 1 && !v5 )
        {
          sub_1800450FC(a1, 0LL, 0LL);
          sub_18004494C(a1, 0, 0LL);
          if ( qword_1800B3D38 )
            qword_1800B3D38(a1, 0LL, 0LL);
        }
        if ( !v3 || v3 == 3 )
        {
          v5 = sub_18004494C(a1, v3, a3);
          if ( qword_1800B3D38 )
          {
            if ( dword_1800B3684 )
              v5 = qword_1800B3D38(a1, v3, a3);
          }
        }
      }
    }
  }
  else
  {
    v5 = 0;
  }
  if ( v3 <= 1 )
    dword_1800B34A0 = -1;
  return v5;
}
