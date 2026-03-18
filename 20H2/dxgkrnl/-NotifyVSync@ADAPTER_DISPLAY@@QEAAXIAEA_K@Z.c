/*
 * XREFs of ?NotifyVSync@ADAPTER_DISPLAY@@QEAAXIAEA_K@Z @ 0x1C0039DF4
 * Callers:
 *     ?NotifyVSync@DXGADAPTER@@QEAAXI@Z @ 0x1C0036F24 (-NotifyVSync@DXGADAPTER@@QEAAXI@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C000AE58 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0020EDC (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 */

void __fastcall ADAPTER_DISPLAY::NotifyVSync(ADAPTER_DISPLAY *this, unsigned int a2, unsigned __int64 *a3)
{
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // r9
  int v10; // ecx
  unsigned int v11; // eax
  unsigned int v12; // ecx
  __int16 v13; // [rsp+30h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+38h] [rbp-50h] BYREF
  __int16 *v15; // [rsp+58h] [rbp-30h]
  __int64 v16; // [rsp+60h] [rbp-28h]

  if ( a2 < *((_DWORD *)this + 20) )
  {
    _mm_lfence();
    v5 = *(unsigned int *)(3968LL * a2 + *((_QWORD *)this + 14) + 3756);
    if ( (_DWORD)v5 )
    {
      v6 = 10 * v5;
      v7 = *((_QWORD *)this + 10 * v5 + 103);
      if ( v7 )
      {
        if ( !*((_DWORD *)this + 20 * v5 + 190) )
        {
          *((_QWORD *)this + 10 * v5 + 101) = 0LL;
          *((_QWORD *)this + 10 * v5 + 102) = 0LL;
          return;
        }
        v8 = *((_QWORD *)this + 10 * v5 + 101);
        v9 = *a3;
        if ( !v8 )
          goto LABEL_17;
        if ( v9 - v8 > (unsigned __int64)*((unsigned int *)this + 20 * v5 + 200) )
        {
          if ( *((_QWORD *)this + 10 * v5 + 102) )
          {
            v10 = *((_DWORD *)this + 20 * v5 + 204);
            ++*((_DWORD *)this + 2 * v6 + 196);
            v11 = v10 - v8;
            v12 = (unsigned int)(v10 - v8) >> 6;
            *((_DWORD *)this + 2 * v6 + 199) += v11 >> 4;
            if ( v12 >= 0x80 )
              v12 = 127;
            ++*(_DWORD *)(3 * v12 + v7);
          }
          else if ( !*((_BYTE *)this + 80 * v5 + 776) )
          {
            ++*((_DWORD *)this + 20 * v5 + 195);
            if ( (unsigned int)dword_1C00AFA20 > 5 )
            {
              if ( tlgKeywordOn((__int64)&dword_1C00AFA20, 0x4000LL) )
              {
                v13 = 0;
                v15 = &v13;
                v16 = 2LL;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C00AFA20,
                  (unsigned __int8 *)dword_1C007DE3A,
                  0LL,
                  0LL,
                  3u,
                  &v14);
                v9 = *a3;
              }
            }
          }
          *((_QWORD *)this + v6 + 102) = 0LL;
LABEL_17:
          *((_QWORD *)this + v6 + 101) = v9;
          return;
        }
        *((_BYTE *)this + 80 * v5 + 776) = 0;
        *((_QWORD *)this + 10 * v5 + 102) = v9;
      }
    }
  }
}
