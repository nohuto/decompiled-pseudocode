/*
 * XREFs of SeMaximumAuditMask @ 0x1405902B4
 * Callers:
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140622140 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x1406C6290 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SeMaximumAuditMaskFromGlobalSacl @ 0x140920298 (SeMaximumAuditMaskFromGlobalSacl.c)
 * Callees:
 *     SepSidInToken @ 0x140204C10 (SepSidInToken.c)
 */

unsigned __int64 __fastcall SeMaximumAuditMask(__int64 a1, int a2, __int64 a3, _DWORD *a4)
{
  unsigned __int64 result; // rax
  _DWORD *v5; // rdi
  __int64 v8; // rbx
  __int64 v9; // rbp
  unsigned __int8 v10; // cl
  int v11; // esi
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  v5 = a4;
  *a4 = 0;
  if ( a1 )
  {
    result = *(unsigned __int16 *)(a1 + 4);
    if ( (_WORD)result )
    {
      v8 = a1 + 8;
      v9 = *(unsigned __int16 *)(a1 + 4);
      do
      {
        v10 = *(_BYTE *)(v8 + 1);
        if ( (v10 & 8) == 0 && (*(_BYTE *)v8 == 2 || *(_BYTE *)v8 == 13) )
        {
          v11 = a2 & *(_DWORD *)(v8 + 4);
          if ( ((v10 >> 6) & (v11 != 0)) != 0 )
          {
            LOBYTE(a4) = 1;
            if ( (unsigned __int8)SepSidInToken(a3, 0LL, v8 + 8, (__int64)a4, 0, 0, 0) )
              *v5 |= v11;
          }
        }
        result = *(unsigned __int16 *)(v8 + 2);
        v8 += result;
        --v9;
      }
      while ( v9 );
    }
  }
  return result;
}
