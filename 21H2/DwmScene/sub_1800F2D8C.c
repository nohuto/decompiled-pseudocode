/*
 * XREFs of sub_1800F2D8C @ 0x1800F2D8C
 * Callers:
 *     sub_1800F27BC @ 0x1800F27BC (sub_1800F27BC.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800114D8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_18002D8C4 @ 0x18002D8C4 (sub_18002D8C4.c)
 *     sub_180031AE8 @ 0x180031AE8 (sub_180031AE8.c)
 *     sub_1800A1588 @ 0x1800A1588 (sub_1800A1588.c)
 *     sub_1800F1174 @ 0x1800F1174 (sub_1800F1174.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_1800F2D8C(__int64 a1, _QWORD *a2)
{
  __int64 *v4; // r12
  __int64 *v5; // r15
  __int64 result; // rax
  __int64 v7; // rdi
  __int64 v8; // r14
  __int64 v9; // rcx
  __int64 v10; // r13
  int v11; // ecx
  __int64 *v12; // rdx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ebx
  int i; // r14d
  __int64 *v21; // rdx
  volatile signed __int32 *v22; // rbx
  signed __int32 v23; // eax
  bool v24; // zf
  const void **v25; // rax
  __int64 v26; // rbx
  __int64 *v27; // rax
  __int64 *v28; // rax
  const void **v29; // rax
  __int64 v30; // rbx
  __int64 *v31; // rax
  __int64 v32; // [rsp+30h] [rbp-D0h]
  __int64 v33; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v34; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v35; // [rsp+48h] [rbp-B8h]
  _QWORD *v36; // [rsp+50h] [rbp-B0h]
  __int64 v37[4]; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v38[4]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v39[4]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v40[4]; // [rsp+B8h] [rbp-48h] BYREF
  const void *v41; // [rsp+D8h] [rbp-28h] BYREF
  char v42[32]; // [rsp+F8h] [rbp-8h] BYREF
  const void *Src; // [rsp+118h] [rbp+18h] BYREF
  char v44[40]; // [rsp+138h] [rbp+38h] BYREF
  _QWORD v45[8]; // [rsp+160h] [rbp+60h] BYREF
  _QWORD v46[8]; // [rsp+1A0h] [rbp+A0h] BYREF
  _QWORD pExceptionObject[14]; // [rsp+1E0h] [rbp+E0h] BYREF

  v36 = a2;
  if ( *(_DWORD *)(a1 + 1168) != 1 )
  {
    sub_18000FE28(v38);
    v28 = sub_18000FE28(v37);
    sub_18002D8C4(v45, v28, 658, (__int64)v38, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v45;
  }
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 1176), a2);
  v4 = (__int64 *)(a1 + 1192);
  *(_QWORD *)(a1 + 1200) = *(_QWORD *)(a1 + 1192);
  v5 = (__int64 *)(a1 + 1216);
  result = *(_QWORD *)(a1 + 1216);
  *(_QWORD *)(a1 + 1224) = result;
  v7 = *(_QWORD *)(a1 + 56);
  v8 = *(_QWORD *)(a1 + 64);
  v32 = v8;
  while ( v7 != v8 )
  {
    if ( !*(_DWORD *)(v7 + 48) )
      goto LABEL_33;
    v9 = *(unsigned __int16 *)(*a2 + 2LL * *(unsigned __int16 *)(v7 + 32) + 128);
    result = 0xFFFFLL;
    if ( (_WORD)v9 == 0xFFFF )
    {
      v25 = sub_1800A1588(
              &Src,
              "ShaderPropertyLayout::SetMasterLayout() -- master layout does not have the property '",
              (_QWORD *)v7);
      v26 = sub_180031AE8((__int64)v44, v25, "' required for import by this layout");
      v27 = sub_18000FE28(v40);
      sub_18002D8C4(pExceptionObject, v27, 673, v26, 0);
      throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
    }
    v10 = *(_QWORD *)(*a2 + 56LL) + 56 * v9;
    v11 = *(_DWORD *)(v7 + 36);
    if ( v11 != *(_DWORD *)(v10 + 36) )
    {
      v29 = sub_1800A1588(
              &v41,
              "ShaderPropertyLayout::SetMasterLayout() -- master layout has different type for property '",
              (_QWORD *)v7);
      v30 = sub_180031AE8((__int64)v42, v29, "' imported by this layout");
      v31 = sub_18000FE28(v39);
      sub_18002D8C4(v46, v31, 680, v30, 0);
      throw (Spectre::Engine::EngineInvalidArgException *)v46;
    }
    if ( v11 == 8 )
    {
      LODWORD(v33) = *(_DWORD *)(v10 + 40);
      HIDWORD(v33) = *(_DWORD *)(v7 + 40);
      v12 = (__int64 *)v5[1];
      if ( (__int64 *)v5[2] == v12 )
      {
        result = sub_1800F1174(v5, (unsigned __int64)v12, &v33);
      }
      else
      {
        result = v33;
        *v12 = v33;
        v5[1] += 8LL;
      }
      goto LABEL_33;
    }
    if ( !v11 )
    {
      v19 = 1;
LABEL_26:
      if ( !v19 )
        goto LABEL_33;
      goto LABEL_27;
    }
    v13 = v11 - 1;
    if ( v13 && (v14 = v13 - 1) != 0 )
    {
      v15 = v14 - 1;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( v16 )
        {
          v17 = v16 - 1;
          if ( v17 && (v18 = v17 - 1) != 0 )
          {
            if ( v18 != 1 )
            {
              v19 = 0;
              goto LABEL_26;
            }
            v19 = 16;
          }
          else
          {
            v19 = 4;
          }
        }
        else
        {
          v19 = 3;
        }
      }
      else
      {
        v19 = 2;
      }
    }
    else
    {
      v19 = 1;
    }
LABEL_27:
    for ( i = 0; i < v19; ++i )
    {
      LODWORD(v35) = i + *(_DWORD *)(v10 + 40);
      HIDWORD(v35) = i + *(_DWORD *)(v7 + 40);
      v34 = v35;
      v21 = (__int64 *)v4[1];
      if ( (__int64 *)v4[2] == v21 )
      {
        result = sub_1800F1174(v4, (unsigned __int64)v21, &v34);
      }
      else
      {
        result = v34;
        *v21 = v34;
        v4[1] += 8LL;
      }
    }
    v8 = v32;
LABEL_33:
    v7 += 56LL;
  }
  v22 = (volatile signed __int32 *)a2[1];
  if ( v22 )
  {
    v23 = _InterlockedExchangeAdd(v22 + 2, 0xFFFFFFFF);
    v24 = v23 == 1;
    result = (unsigned int)(v23 - 1);
    if ( v24 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v22)(v22);
      result = (unsigned int)_InterlockedDecrement(v22 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
    }
  }
  return result;
}
