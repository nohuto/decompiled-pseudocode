/*
 * XREFs of ?CheckMcdmDdiSubmission@DXGADAPTER@@AEAAJXZ @ 0x1C00219D8
 * Callers:
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C01832A8 (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 * Callees:
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C00072A4 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 */

__int64 __fastcall DXGADAPTER::CheckMcdmDdiSubmission(DXGADAPTER *this)
{
  int v3; // eax
  int v4; // ebx
  char v5; // si
  char v6; // r14
  char v7; // bp
  unsigned int NumDifferentPhysicalAdapters; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  char v11; // r9
  unsigned __int16 *v12; // rcx
  __int64 v13; // r8
  char *v14; // r8
  __int64 v15; // r10
  char v16; // cl
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax

  if ( (*((_DWORD *)this + 642) & 8) == 0 )
    return 0LL;
  v3 = *((_DWORD *)this + 87);
  if ( (v3 & 8) != 0 || (v3 & 0x4000) != 0 )
    return 0LL;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  while ( 1 )
  {
    NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters(this);
    if ( (unsigned int)v9 >= NumDifferentPhysicalAdapters )
      break;
    v12 = (unsigned __int16 *)(*((_QWORD *)this + 323) + 360LL * (unsigned int)v9);
    v13 = *((_QWORD *)v12 + 4);
    if ( v13 && *v12 )
    {
      v14 = (char *)(v13 + 73);
      v15 = *v12;
      do
      {
        v16 = *v14;
        if ( *(v14 - 1) || v16 )
        {
          if ( (*(v14 - 5) & 1) != 0 )
            v6 = 1;
          else
            v5 = 1;
        }
        if ( v16 )
          v7 = 1;
        v14 += 74;
        --v15;
      }
      while ( v15 );
    }
  }
  v17 = *((_QWORD *)this + 53);
  if ( v11 )
  {
    if ( !v17 )
    {
      v18 = WdLogNewEntry5_WdError(v10, v9);
      *(_QWORD *)(v18 + 24) = 264LL;
      WdLogEvent5_WdError(v18);
      v4 = 1;
    }
    if ( !*((_QWORD *)this + 80) )
    {
      v19 = WdLogNewEntry5_WdError(v10, v9);
      *(_QWORD *)(v19 + 24) = 265LL;
      WdLogEvent5_WdError(v19);
      ++v4;
    }
    if ( !*((_QWORD *)this + 54) )
    {
      v20 = WdLogNewEntry5_WdError(v10, v9);
      *(_QWORD *)(v20 + 24) = 266LL;
LABEL_32:
      WdLogEvent5_WdError(v20);
      ++v4;
    }
  }
  else
  {
    if ( v17 )
    {
      v21 = WdLogNewEntry5_WdError(v10, v9);
      *(_QWORD *)(v21 + 24) = 270LL;
      WdLogEvent5_WdError(v21);
      v4 = 1;
    }
    if ( *((_QWORD *)this + 80) )
    {
      v22 = WdLogNewEntry5_WdError(v10, v9);
      *(_QWORD *)(v22 + 24) = 271LL;
      WdLogEvent5_WdError(v22);
      ++v4;
    }
    if ( *((__int64 (__fastcall **)(void *const, const struct _DXGKARG_SUBMITCOMMAND *))this + 54) != DXGADAPTER::DefaultDdiSubmitCommand )
    {
      v20 = WdLogNewEntry5_WdError(v10, v9);
      *(_QWORD *)(v20 + 24) = 272LL;
      goto LABEL_32;
    }
  }
  v23 = *((_QWORD *)this + 110);
  if ( v5 )
  {
    if ( !v23 )
    {
      v24 = WdLogNewEntry5_WdError(v10, v9);
      *(_QWORD *)(v24 + 24) = 277LL;
      WdLogEvent5_WdError(v24);
      ++v4;
    }
    if ( !*((_QWORD *)this + 111) )
    {
      v25 = WdLogNewEntry5_WdError(v10, v9);
      *(_QWORD *)(v25 + 24) = 278LL;
      WdLogEvent5_WdError(v25);
      ++v4;
    }
    if ( !*((_QWORD *)this + 107) )
    {
      v26 = WdLogNewEntry5_WdError(v10, v9);
      *(_QWORD *)(v26 + 24) = 279LL;
      WdLogEvent5_WdError(v26);
      ++v4;
    }
    if ( !*((_QWORD *)this + 106) )
    {
      v27 = WdLogNewEntry5_WdError(v10, v9);
      *(_QWORD *)(v27 + 24) = 280LL;
      WdLogEvent5_WdError(v27);
      ++v4;
    }
    if ( !*((_QWORD *)this + 105) )
    {
      v28 = WdLogNewEntry5_WdError(v10, v9);
      *(_QWORD *)(v28 + 24) = 281LL;
LABEL_58:
      WdLogEvent5_WdError(v28);
      ++v4;
    }
  }
  else
  {
    if ( v23 )
    {
      v29 = WdLogNewEntry5_WdError(v10, v9);
      *(_QWORD *)(v29 + 24) = 287LL;
      WdLogEvent5_WdError(v29);
      ++v4;
    }
    if ( *((_QWORD *)this + 111) )
    {
      v30 = WdLogNewEntry5_WdError(v10, v9);
      *(_QWORD *)(v30 + 24) = 288LL;
      WdLogEvent5_WdError(v30);
      ++v4;
    }
    if ( *((_QWORD *)this + 107) )
    {
      v31 = WdLogNewEntry5_WdError(v10, v9);
      *(_QWORD *)(v31 + 24) = 289LL;
      WdLogEvent5_WdError(v31);
      ++v4;
    }
    if ( *((_QWORD *)this + 106) )
    {
      v32 = WdLogNewEntry5_WdError(v10, v9);
      *(_QWORD *)(v32 + 24) = 290LL;
      WdLogEvent5_WdError(v32);
      ++v4;
    }
    if ( *((_QWORD *)this + 105) )
    {
      v33 = WdLogNewEntry5_WdError(v10, v9);
      *(_QWORD *)(v33 + 24) = 291LL;
      WdLogEvent5_WdError(v33);
      ++v4;
    }
    if ( *((_QWORD *)this + 108) )
    {
      v34 = WdLogNewEntry5_WdError(v10, v9);
      *(_QWORD *)(v34 + 24) = 292LL;
      WdLogEvent5_WdError(v34);
      ++v4;
    }
    if ( *((_QWORD *)this + 109) )
    {
      v28 = WdLogNewEntry5_WdError(v10, v9);
      *(_QWORD *)(v28 + 24) = 293LL;
      goto LABEL_58;
    }
  }
  if ( v7 )
  {
    if ( !*((_QWORD *)this + 156) )
    {
      v35 = WdLogNewEntry5_WdError(v10, v9);
      *(_QWORD *)(v35 + 24) = 298LL;
      WdLogEvent5_WdError(v35);
      ++v4;
    }
    if ( !*((_QWORD *)this + 157) )
    {
      v36 = WdLogNewEntry5_WdError(v10, v9);
      *(_QWORD *)(v36 + 24) = 299LL;
      WdLogEvent5_WdError(v36);
      ++v4;
    }
  }
  if ( !v6 )
  {
    if ( *((_QWORD *)this + 126) )
    {
      v37 = WdLogNewEntry5_WdError(v10, v9);
      *(_QWORD *)(v37 + 24) = 304LL;
      WdLogEvent5_WdError(v37);
      ++v4;
    }
    if ( *((_QWORD *)this + 128) )
    {
      v38 = WdLogNewEntry5_WdError(v10, v9);
      *(_QWORD *)(v38 + 24) = 305LL;
      WdLogEvent5_WdError(v38);
      ++v4;
    }
    if ( *((_QWORD *)this + 127) )
    {
      v39 = WdLogNewEntry5_WdError(v10, v9);
      *(_QWORD *)(v39 + 24) = 306LL;
      WdLogEvent5_WdError(v39);
      ++v4;
    }
    if ( *((_QWORD *)this + 129) )
    {
      v40 = WdLogNewEntry5_WdError(v10, v9);
      *(_QWORD *)(v40 + 24) = 307LL;
      WdLogEvent5_WdError(v40);
      ++v4;
    }
    if ( *((_QWORD *)this + 132) )
    {
      v41 = WdLogNewEntry5_WdError(v10, v9);
      *(_QWORD *)(v41 + 24) = 308LL;
      WdLogEvent5_WdError(v41);
      ++v4;
    }
    if ( *((_QWORD *)this + 154) )
    {
      v42 = WdLogNewEntry5_WdError(v10, v9);
      *(_QWORD *)(v42 + 24) = 309LL;
      WdLogEvent5_WdError(v42);
      ++v4;
    }
    if ( *((_QWORD *)this + 133) )
    {
      v43 = WdLogNewEntry5_WdError(v10, v9);
      *(_QWORD *)(v43 + 24) = 310LL;
      WdLogEvent5_WdError(v43);
      ++v4;
    }
    if ( *((_QWORD *)this + 152) )
    {
      v44 = WdLogNewEntry5_WdError(v10, v9);
      *(_QWORD *)(v44 + 24) = 311LL;
      WdLogEvent5_WdError(v44);
      ++v4;
    }
    if ( *((_QWORD *)this + 149) )
    {
      v45 = WdLogNewEntry5_WdError(v10, v9);
      *(_QWORD *)(v45 + 24) = 312LL;
      WdLogEvent5_WdError(v45);
      ++v4;
    }
    if ( *((_QWORD *)this + 150) )
    {
      v46 = WdLogNewEntry5_WdError(v10, v9);
      *(_QWORD *)(v46 + 24) = 313LL;
      WdLogEvent5_WdError(v46);
      ++v4;
    }
    if ( *((_QWORD *)this + 160) )
    {
      v47 = WdLogNewEntry5_WdError(v10, v9);
      *(_QWORD *)(v47 + 24) = 314LL;
      WdLogEvent5_WdError(v47);
      ++v4;
    }
    if ( *((_QWORD *)this + 130) )
    {
      v48 = WdLogNewEntry5_WdError(v10, v9);
      *(_QWORD *)(v48 + 24) = 315LL;
      WdLogEvent5_WdError(v48);
      ++v4;
    }
    if ( *((_QWORD *)this + 153) )
    {
      v49 = WdLogNewEntry5_WdError(v10, v9);
      *(_QWORD *)(v49 + 24) = 316LL;
      WdLogEvent5_WdError(v49);
      ++v4;
    }
    if ( *((_QWORD *)this + 131) )
    {
      v50 = WdLogNewEntry5_WdError(v10, v9);
      *(_QWORD *)(v50 + 24) = 317LL;
      WdLogEvent5_WdError(v50);
      ++v4;
    }
    if ( *((_QWORD *)this + 146) )
    {
      v51 = WdLogNewEntry5_WdError(v10, v9);
      *(_QWORD *)(v51 + 24) = 318LL;
      WdLogEvent5_WdError(v51);
      ++v4;
    }
  }
  if ( !v4 )
    return 0LL;
  return 3221225561LL;
}
