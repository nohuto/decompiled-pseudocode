/*
 * XREFs of ??$_Emplace_reallocate@VNotificationData@@@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@QEAAPEAVNotificationData@@QEAV2@$$QEAV2@@Z @ 0x180014E70
 * Callers:
 *     ?NotifyInputSinkRemoved@@YAHPEAX@Z @ 0x180013CE0 (-NotifyInputSinkRemoved@@YAHPEAX@Z.c)
 *     ?NotifyInputSinkParented@@YAHPEAX0@Z @ 0x1800150A0 (-NotifyInputSinkParented@@YAHPEAX0@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C400 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18003C7B8 (--2@YAPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x180068408 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??$_Uninitialized_move@PEAVNotificationData@@PEAV1@V?$allocator@VNotificationData@@@std@@@std@@YAPEAVNotificationData@@QEAV1@0PEAV1@AEAV?$allocator@VNotificationData@@@0@@Z @ 0x180068A2C (--$_Uninitialized_move@PEAVNotificationData@@PEAV1@V-$allocator@VNotificationData@@@std@@@std@@Y.c)
 */

char *__fastcall std::vector<NotificationData>::_Emplace_reallocate<NotificationData>(
        _QWORD *a1,
        unsigned __int64 a2,
        __int64 a3)
{
  unsigned __int64 v4; // r10
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 v12; // r13
  unsigned __int64 v13; // rdx
  _QWORD *v14; // r15
  char *v15; // r12
  _QWORD *v16; // r8
  _QWORD *v17; // rcx
  _QWORD *v18; // rdx
  _QWORD *v19; // rbx
  _QWORD *v20; // rsi
  __int64 v21; // rcx
  const struct std::nothrow_t *v22; // rdx
  size_t v24; // rcx
  void *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r9
  unsigned __int64 v28; // [rsp+20h] [rbp-48h]
  __int64 v29; // [rsp+20h] [rbp-48h]
  __int64 v30; // [rsp+28h] [rbp-40h]
  void *v31; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v32; // [rsp+78h] [rbp+10h] BYREF
  _QWORD *v33; // [rsp+88h] [rbp+20h]

  v32 = a2;
  v4 = a2;
  v6 = a2 - *a1;
  v7 = (__int64)(a1[1] - *a1) >> 5;
  if ( v7 == 0x7FFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = (__int64)(a1[2] - *a1) >> 5;
  v10 = v9 >> 1;
  if ( v9 > 0x7FFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v7 + 1;
  }
  else
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  v28 = v11;
  v12 = 4 * v11;
  v13 = 32 * v11;
  if ( v11 > 0x7FFFFFFFFFFFFFFLL )
  {
    v13 = -1LL;
  }
  else if ( v13 < 0x1000 )
  {
    if ( v13 )
    {
      v14 = operator new(32 * v11);
      v4 = v32;
      goto LABEL_9;
    }
    goto LABEL_31;
  }
  v24 = v13 + 39;
  if ( v13 + 39 < v13 )
    v24 = -1LL;
  v25 = operator new(v24);
  if ( v25 )
  {
    v14 = (_QWORD *)(((unsigned __int64)v25 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *(v14 - 1) = v25;
    v4 = v32;
    goto LABEL_9;
  }
  _o__invalid_parameter_noinfo_noreturn(v26);
  __debugbreak();
LABEL_31:
  v14 = 0LL;
LABEL_9:
  v31 = v14;
  v15 = (char *)v14 + (v6 & 0xFFFFFFFFFFFFFFE0uLL);
  *(_DWORD *)v15 = *(_DWORD *)a3;
  *((_QWORD *)v15 + 1) = *(_QWORD *)(a3 + 8);
  *((_QWORD *)v15 + 2) = *(_QWORD *)(a3 + 16);
  *(_QWORD *)(a3 + 16) = 0LL;
  *((_QWORD *)v15 + 3) = *(_QWORD *)(a3 + 24);
  v33 = v15;
  v16 = (_QWORD *)a1[1];
  v17 = (_QWORD *)*a1;
  if ( (_QWORD *)v4 == v16 )
  {
    if ( v17 != v16 )
    {
      v18 = v14 + 2;
      do
      {
        *((_DWORD *)v18 - 4) = *(_DWORD *)v17;
        *(v18 - 1) = v17[1];
        *v18 = v17[2];
        v17[2] = 0LL;
        v18[1] = v17[3];
        v18 += 4;
        v17 += 4;
      }
      while ( v17 != v16 );
    }
  }
  else
  {
    std::_Uninitialized_move<NotificationData *,NotificationData *,std::allocator<NotificationData>>(
      v17,
      v4,
      v14,
      0LL,
      v28,
      v15 + 32);
    v33 = v14;
    std::_Uninitialized_move<NotificationData *,NotificationData *,std::allocator<NotificationData>>(
      v32,
      a1[1],
      v15 + 32,
      v27,
      v29,
      v30);
  }
  v19 = (_QWORD *)*a1;
  if ( *a1 )
  {
    v20 = (_QWORD *)a1[1];
    if ( v19 != v20 )
    {
      do
      {
        v21 = v19[2];
        if ( (unsigned __int64)(v21 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          NtCloseCompositionInputSink(v21);
        v19 += 4;
      }
      while ( v19 != v20 );
      v19 = (_QWORD *)*a1;
    }
    v22 = (const struct std::nothrow_t *)((a1[2] - (_QWORD)v19) & 0xFFFFFFFFFFFFFFE0uLL);
    v32 = (unsigned __int64)v22;
    v31 = v19;
    if ( (unsigned __int64)v22 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v31, &v32);
      v22 = (const struct std::nothrow_t *)v32;
      v19 = v31;
    }
    operator delete(v19, v22);
  }
  *a1 = v14;
  a1[1] = &v14[4 * v8];
  a1[2] = &v14[v12];
  return v15;
}
