/*
 * XREFs of ?NotifyOnChanged@CCompositionLight@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800BDB50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionLight::NotifyOnChanged(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rsi
  char v7; // bp
  int v8; // ecx
  __int64 v9; // rax
  unsigned __int64 v10; // r15
  __int64 v11; // r12
  __int64 v12; // r14
  __int64 v13; // rdx
  unsigned __int64 *v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v4 = a3;
  if ( a3 )
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 216LL))(a1);
    if ( v4 == result )
    {
      if ( a2 == 1 )
        return result;
      a2 = 11;
      v4 = a1;
    }
  }
  if ( a2 == 11 || a2 == 1 )
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 272LL))(a1);
    v7 = result;
    if ( !(_BYTE)result || !*(_BYTE *)(a1 + 160) )
    {
      v8 = *(_DWORD *)(a1 + 32);
      *(_DWORD *)(a1 + 32) = v8 ^ ((unsigned __int8)v8 ^ (unsigned __int8)(v8 + 2)) & 6;
      if ( (((unsigned __int8)v8 ^ ((unsigned __int8)v8 ^ (unsigned __int8)(v8 + 2)) & 6) & 6) == 2
        && (*(unsigned int (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 192LL))(a1, a2, v4) )
      {
        v9 = *(_QWORD *)(a1 + 24);
        if ( (v9 & 2) != 0 )
          v9 = *(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFFCuLL);
        else
          LODWORD(v9) = v9 & 1;
        if ( (_DWORD)v9 )
        {
          v10 = 0LL;
          v11 = (unsigned int)v9;
          v12 = 2LL;
          do
          {
            v13 = *(_QWORD *)(a1 + 24);
            v14 = (unsigned __int64 *)(v13 & 0xFFFFFFFFFFFFFFFCuLL);
            if ( (v13 & 2) != 0 )
              v15 = *v14;
            else
              v15 = v13 & 1;
            if ( v10 >= v15 )
            {
              v16 = 0LL;
            }
            else if ( v15 == 1 )
            {
              v16 = v13 & 0xFFFFFFFFFFFFFFFCuLL;
            }
            else
            {
              v16 = v14[v12];
            }
            (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD, __int64))(*(_QWORD *)a1 + 80LL))(a1, v16, a2, v4);
            ++v10;
            ++v12;
            --v11;
          }
          while ( v11 );
        }
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1);
      result = (*(_DWORD *)(a1 + 32) ^ (2 * (*(_DWORD *)(a1 + 32) >> 1) - 2)) & 6;
      *(_DWORD *)(a1 + 32) ^= result;
    }
    *(_BYTE *)(a1 + 160) = v7;
  }
  return result;
}
