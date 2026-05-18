/*
 * XREFs of sub_18008C298 @ 0x18008C298
 * Callers:
 *     sub_180096B80 @ 0x180096B80 (sub_180096B80.c)
 * Callees:
 *     sub_180062680 @ 0x180062680 (sub_180062680.c)
 *     sub_1800687EC @ 0x1800687EC (sub_1800687EC.c)
 *     sub_1800A4B30 @ 0x1800A4B30 (sub_1800A4B30.c)
 *     sub_1800C6F90 @ 0x1800C6F90 (sub_1800C6F90.c)
 *     sub_1800EEDE8 @ 0x1800EEDE8 (sub_1800EEDE8.c)
 *     sub_1800F16C4 @ 0x1800F16C4 (sub_1800F16C4.c)
 *     sub_1800F184C @ 0x1800F184C (sub_1800F184C.c)
 *     sub_1800F26D0 @ 0x1800F26D0 (sub_1800F26D0.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18008C298(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, char a5)
{
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // rdx
  signed __int32 v14; // eax
  int v15; // edx
  bool v16; // zf
  __int64 v17; // r8
  __int64 v18; // rdx
  signed __int32 v19; // eax
  unsigned int i; // edi
  __int64 v21; // r12
  volatile signed __int32 *v22; // rbx
  __int64 v23; // rax
  __int64 *v24; // rax
  __int64 *v25; // rdx
  __int64 *v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  signed __int32 v29; // eax
  volatile signed __int32 *v30; // rbx
  unsigned int v32; // [rsp+30h] [rbp-61h]
  __int128 v33; // [rsp+38h] [rbp-59h]
  unsigned int v34; // [rsp+48h] [rbp-49h]
  __int128 v35; // [rsp+50h] [rbp-41h] BYREF
  _BYTE v36[8]; // [rsp+60h] [rbp-31h] BYREF
  volatile signed __int32 *v37; // [rsp+68h] [rbp-29h]
  __int128 v38; // [rsp+70h] [rbp-21h] BYREF
  int v39; // [rsp+80h] [rbp-11h] BYREF
  __int128 v40; // [rsp+88h] [rbp-9h] BYREF

  v34 = *(_DWORD *)(*a4 + 88);
  v32 = 0;
  v9 = *(_QWORD *)(a1 + 152);
  v10 = sub_180062680(*(_QWORD *)(a1 + 136));
  v11 = *(unsigned int *)(*a4 + 104);
  v38 = 0LL;
  sub_1800A4B30(*(_QWORD *)(a1 + 136), &v38, v9 | v10 | a3, v11);
  if ( (_QWORD)v38 )
  {
    v12 = *a4;
    v35 = 0LL;
    v13 = *(_QWORD *)(v12 + 80);
    if ( v13 )
    {
      while ( 1 )
      {
        v14 = *(_DWORD *)(v13 + 8);
        if ( !v14 )
          break;
        if ( v14 == _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 8), v14 + 1, v14) )
        {
          v35 = *(_OWORD *)(v12 + 72);
          break;
        }
      }
    }
    sub_1800F184C(v38, &v35);
    v15 = *(_DWORD *)(v38 + 128);
    if ( v15 )
    {
      if ( v15 != 1 )
        goto LABEL_53;
      v16 = *(_QWORD *)(v38 + 144) == *(_QWORD *)(v38 + 152);
    }
    else
    {
      v16 = *(_QWORD *)(v38 + 136) == 0LL;
    }
    if ( !v16 )
    {
      v17 = *a4;
      v33 = 0LL;
      v18 = *(_QWORD *)(*a4 + 80);
      if ( v18 )
      {
        while ( 1 )
        {
          v19 = *(_DWORD *)(v18 + 8);
          if ( !v19 )
            break;
          if ( v19 == _InterlockedCompareExchange((volatile signed __int32 *)(v18 + 8), v19 + 1, v19) )
          {
            v33 = *(_OWORD *)(v17 + 72);
            break;
          }
        }
      }
      (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)v33 + 192LL))(v33, &v39);
      if ( *((_QWORD *)&v33 + 1) )
      {
        if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v33 + 1) + 8LL)) )
        {
          (***((void (__fastcall ****)(_QWORD))&v33 + 1))(*((_QWORD *)&v33 + 1));
          if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v33 + 1) + 12LL)) )
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v33 + 1) + 8LL))(*((_QWORD *)&v33 + 1));
        }
      }
      for ( i = 0; i < 6; ++i )
      {
        if ( ((1 << i) & v39) != 0 )
        {
          v21 = *(_QWORD *)sub_1800F26D0(v38, v36, i);
          v22 = v37;
          if ( v37 )
          {
            if ( _InterlockedExchangeAdd(v37 + 2, 0xFFFFFFFF) == 1 )
            {
              (**(void (__fastcall ***)(volatile signed __int32 *))v22)(v22);
              if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
            }
          }
          if ( v21 )
            v32 |= 1 << i;
        }
      }
      sub_1800F16C4(v38, (_DWORD)a4, (*(_BYTE *)(a1 + 112) & 0x40) == 0, v32, a5);
      sub_1800EEDE8(*(_QWORD *)(a1 + 120), a4, v32);
      v23 = *(_QWORD *)(a1 + 168);
      if ( v23 )
      {
        v24 = *(__int64 **)(v23 + 128);
        v25 = v24;
        v26 = (__int64 *)v24[1];
        if ( *((_BYTE *)v26 + 25) )
          goto LABEL_40;
        do
        {
          if ( *((_DWORD *)v26 + 8) >= v34 )
          {
            v25 = v26;
            v26 = (__int64 *)*v26;
          }
          else
          {
            v26 = (__int64 *)v26[2];
          }
        }
        while ( !*((_BYTE *)v26 + 25) );
        if ( v25 == v24 || v34 < *((_DWORD *)v25 + 8) )
LABEL_40:
          v25 = v24;
        if ( v25 == v24 )
        {
          v27 = *a4;
          v40 = 0LL;
          v28 = *(_QWORD *)(v27 + 80);
          if ( v28 )
          {
            while ( 1 )
            {
              v29 = *(_DWORD *)(v28 + 8);
              if ( !v29 )
                break;
              if ( v29 == _InterlockedCompareExchange((volatile signed __int32 *)(v28 + 8), v29 + 1, v29) )
              {
                v40 = *(_OWORD *)(v27 + 72);
                break;
              }
            }
          }
          sub_1800C6F90(*(_QWORD *)(a1 + 168), &v40);
          v30 = (volatile signed __int32 *)*((_QWORD *)&v40 + 1);
          if ( *((_QWORD *)&v40 + 1) )
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v40 + 1) + 8LL), 0xFFFFFFFF) == 1 )
            {
              (**(void (__fastcall ***)(volatile signed __int32 *))v30)(v30);
              if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
            }
          }
        }
        sub_1800687EC(*a4);
      }
    }
  }
LABEL_53:
  *(_OWORD *)a2 = v38;
  *(_DWORD *)(a2 + 16) = v32;
  return a2;
}
