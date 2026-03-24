/*
 * XREFs of ?NotifyVSync@ADAPTER_DISPLAY@@QEAAXIAEA_K@Z @ 0x1C003AD34
 * Callers:
 *     ?NotifyVSync@DXGADAPTER@@QEAAXI@Z @ 0x1C0038024 (-NotifyVSync@DXGADAPTER@@QEAAXI@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C000B1A8 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002145C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 */

void __fastcall ADAPTER_DISPLAY::NotifyVSync(ADAPTER_DISPLAY *this, unsigned int a2, unsigned __int64 *a3)
{
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // r9
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  __int16 v12; // [rsp+30h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+38h] [rbp-50h] BYREF
  __int16 *v14; // [rsp+58h] [rbp-30h]
  __int64 v15; // [rsp+60h] [rbp-28h]

  if ( a2 < *((_DWORD *)this + 20) )
  {
    _mm_lfence();
    v5 = *(unsigned int *)(3968LL * a2 + *((_QWORD *)this + 14) + 3756);
    if ( (_DWORD)v5 )
    {
      v6 = 10 * v5;
      v7 = *((_QWORD *)this + 10 * v5 + 104);
      if ( v7 )
      {
        if ( !*((_DWORD *)this + 20 * v5 + 192) )
        {
          *((_QWORD *)this + 10 * v5 + 102) = 0LL;
          *((_QWORD *)this + 10 * v5 + 103) = 0LL;
          return;
        }
        v8 = *((_QWORD *)this + 10 * v5 + 102);
        v9 = *a3;
        if ( !v8 )
          goto LABEL_17;
        if ( v9 - v8 > (unsigned __int64)*((unsigned int *)this + 20 * v5 + 202) )
        {
          if ( *((_QWORD *)this + 10 * v5 + 103) )
          {
            v10 = *((_DWORD *)this + 20 * v5 + 206) - *((_DWORD *)this + 20 * v5 + 204);
            ++*((_DWORD *)this + 2 * v6 + 198);
            *((_DWORD *)this + 2 * v6 + 201) += v10 >> 4;
            v11 = v10 >> 6;
            if ( v11 >= 0x80 )
              v11 = 127;
            ++*(_DWORD *)(3 * v11 + v7);
          }
          else if ( !*((_BYTE *)this + 80 * v5 + 784) )
          {
            ++*((_DWORD *)this + 20 * v5 + 197);
            if ( (unsigned int)dword_1C00B1A20 > 5 )
            {
              if ( tlgKeywordOn((__int64)&dword_1C00B1A20, 0x4000LL) )
              {
                v12 = 0;
                v14 = &v12;
                v15 = 2LL;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C00B1A20,
                  (unsigned __int8 *)dword_1C007EFAA,
                  0LL,
                  0LL,
                  3u,
                  &v13);
                v9 = *a3;
              }
            }
          }
          *((_QWORD *)this + v6 + 103) = 0LL;
LABEL_17:
          *((_QWORD *)this + v6 + 102) = v9;
          return;
        }
        *((_BYTE *)this + 80 * v5 + 784) = 0;
        *((_QWORD *)this + 10 * v5 + 103) = v9;
      }
    }
  }
}
