/*
 * XREFs of ?Reinitialize@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180033AE0
 * Callers:
 *     ?Initialize@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x180033964 (-Initialize@CPartitionVerticalBlankScheduler@@AEAAJXZ.c)
 *     ?Reset@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x180033A54 (-Reset@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     ?Clear@CFrameInfo@@QEAAXXZ @ 0x180033CF8 (-Clear@CFrameInfo@@QEAAXXZ.c)
 *     ?UpdateCurrentTime@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180078E18 (-UpdateCurrentTime@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::Reinitialize(CPartitionVerticalBlankScheduler *this)
{
  char v1; // dl
  __int64 v3; // rcx
  char *v4; // rsi
  __int64 v5; // rax
  CFrameInfo *v6; // r14
  __int64 v7; // rbp
  __int64 v8; // r12
  __int64 v9; // r15
  __int64 v10; // r13
  __int64 v11; // rbx
  LONGLONG v12; // rax
  __int64 v13; // rax
  char LowPart; // cl
  LARGE_INTEGER v15; // rax
  LARGE_INTEGER PerformanceCount; // [rsp+60h] [rbp+8h] BYREF
  char v17; // [rsp+68h] [rbp+10h]
  __int64 v18; // [rsp+70h] [rbp+18h]

  v1 = *((_BYTE *)this + 5375);
  *((_QWORD *)this + 1397) = 0LL;
  *((_BYTE *)this + 15900) = 0;
  *((_QWORD *)this + 1398) = 0LL;
  *((_QWORD *)this + 631) = 0LL;
  *(_WORD *)((char *)this + 5373) = 0;
  *((_BYTE *)this + 5372) = 0;
  if ( v1 )
  {
    *((_QWORD *)this + 1990) = 0LL;
    *((_QWORD *)this + 1992) = ((unsigned __int64)this + 15936) | (((_QWORD)this + 15936) << 32);
    CPartitionVerticalBlankScheduler::UpdateCurrentTime(this);
    v1 = *((_BYTE *)this + 5375);
    *((_QWORD *)this + 1989) = *((_QWORD *)this + 1990);
  }
  v3 = *((_QWORD *)this + 630);
  v4 = (char *)this + 432;
  v5 = *((_QWORD *)this + 629);
  v6 = (CPartitionVerticalBlankScheduler *)((char *)this + 152);
  v7 = 0LL;
  v18 = 0x10000003CLL;
  v8 = *(_QWORD *)(v3 + 16);
  v9 = 16LL;
  if ( !v1 )
    v7 = *(_QWORD *)(v5 + 248);
  v10 = *(_QWORD *)(v3 + 248);
  v11 = v18;
  LOBYTE(PerformanceCount.LowPart) = *(_BYTE *)(v3 + 256);
  v17 = *(_BYTE *)(v3 + 265);
  do
  {
    CFrameInfo::Clear(v6);
    *(v4 - 40) = 0;
    *((_QWORD *)v4 - 4) = 0LL;
    *(v4 - 24) = 0;
    *((_DWORD *)v4 - 5) = 0;
    *(v4 - 15) = 0;
    *(_QWORD *)v4 = v11;
    v12 = g_qpcFrequency.QuadPart * *((unsigned int *)v4 + 1);
    v4[16] = 1;
    v13 = v12 / (unsigned int)v11;
    *((_QWORD *)v4 - 1) = v13;
    *((_QWORD *)v4 + 1) = v13;
    v6 = (CFrameInfo *)((char *)v6 + 304);
    v4 += 304;
    --v9;
  }
  while ( v9 );
  LowPart = PerformanceCount.LowPart;
  *(_QWORD *)(*((_QWORD *)this + 630) + 16LL) = v8;
  *(_QWORD *)(*((_QWORD *)this + 630) + 248LL) = v10;
  *(_BYTE *)(*((_QWORD *)this + 630) + 256LL) = LowPart;
  *(_BYTE *)(*((_QWORD *)this + 630) + 265LL) = v17;
  *(_QWORD *)(*((_QWORD *)this + 629) + 248LL) = v7;
  *(_BYTE *)(*((_QWORD *)this + 630) + 139LL) = 1;
  if ( *((_BYTE *)this + 5375) )
    *((_BYTE *)this + 5375) = 0;
  *((_QWORD *)this + 1981) = this;
  *((_QWORD *)this + 1391) = 0LL;
  *(_OWORD *)((char *)this + 11144) = 0LL;
  *((_DWORD *)this + 2784) = 0;
  *(_OWORD *)((char *)this + 11160) = 0LL;
  QueryPerformanceCounter(&PerformanceCount);
  v15 = PerformanceCount;
  *((_QWORD *)this + 1390) = 0LL;
  *((LARGE_INTEGER *)this + 1389) = v15;
}
