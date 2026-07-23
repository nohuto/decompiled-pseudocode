/*
 * XREFs of _RtlpCreateServerAcl@20 @ 0x4B348798
 * Callers:
 *     _RtlpNewSecurityObject@40 @ 0x4B2D6852 (_RtlpNewSecurityObject@40.c)
 *     _RtlpSetSecurityObject@32 @ 0x4B3491B6 (_RtlpSetSecurityObject@32.c)
 * Callees:
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlCreateAcl@12 @ 0x4B2D7BF0 (_RtlCreateAcl@12.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

int __fastcall RtlpCreateServerAcl(int a1, char a2, unsigned __int8 *Src, ACL **a4, _BYTE *a5)
{
  int v6; // esi
  unsigned __int16 *v7; // edi
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  int v11; // eax
  ACL *Heap; // ecx
  ACL *v14; // esi
  unsigned int v15; // ecx
  char v16; // al
  unsigned __int16 v17; // ax
  unsigned __int16 *v18; // eax
  char *p_AceCount; // esi
  char *v20; // esi
  unsigned __int8 v21; // cl
  size_t v22; // [esp-10h] [ebp-30h]
  SIZE_T v23; // [esp-4h] [ebp-24h]
  size_t v24; // [esp-4h] [ebp-24h]
  ACL *v25; // [esp+Ch] [ebp-14h]
  ACL *v26; // [esp+10h] [ebp-10h]
  int v27; // [esp+14h] [ebp-Ch]
  unsigned int v28; // [esp+14h] [ebp-Ch]
  void *v29; // [esp+18h] [ebp-8h]
  unsigned __int8 *v30; // [esp+18h] [ebp-8h]
  char v31; // [esp+1Fh] [ebp-1h]

  v31 = a2;
  v6 = 8;
  if ( a1 )
  {
    v7 = (unsigned __int16 *)(a1 + 8);
    v8 = a1 + 8;
    v27 = (unsigned __int16)(4 * (Src[1] + 2));
    v29 = (void *)*(unsigned __int16 *)(a1 + 4);
    if ( *(_WORD *)(a1 + 4) )
    {
      do
      {
        if ( *(_BYTE *)v8 )
        {
          if ( a2 && *(_BYTE *)v8 == 4 )
          {
            v9 = *(unsigned __int8 *)(v8 + 13);
            LOWORD(v9) = 4 * v9;
            if ( (unsigned __int16)(v9 + 8) <= (unsigned __int16)v27 )
            {
              v10 = v27 - v9;
              v6 -= 8;
            }
            else
            {
              v10 = v9 + 8 - v27;
            }
            a2 = v31;
            v6 += v10;
          }
        }
        else
        {
          v6 += v27 + 4;
        }
        v11 = *(unsigned __int16 *)(v8 + 2);
        v6 += v11;
        v8 += v11;
        v29 = (char *)v29 - 1;
      }
      while ( v29 );
      v7 = (unsigned __int16 *)(a1 + 8);
    }
    LODWORD(v23) = (unsigned __int16)v6;
    Heap = (ACL *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, v23);
    *a4 = Heap;
    if ( !Heap )
      return -1073741670;
    *a5 = 1;
    RtlCreateAcl(Heap, (unsigned __int16)v6, 3u);
    v28 = 0;
    v25 = *a4;
    v14 = *a4 + 1;
    LOWORD(v15) = *(_WORD *)(a1 + 4);
    if ( (_WORD)v15 )
    {
      do
      {
        v16 = *(_BYTE *)v7;
        if ( !*(_BYTE *)v7 || v31 && v16 == 4 )
        {
          v26 = v14;
          if ( v16 )
            v18 = &v7[2 * *((unsigned __int8 *)v7 + 13) + 10];
          else
            v18 = v7 + 4;
          v30 = (unsigned __int8 *)v18;
          *(_DWORD *)&v14->AclRevision = *(_DWORD *)v7;
          *(_DWORD *)&v14->AceCount = *((_DWORD *)v7 + 1);
          p_AceCount = (char *)&v14[1].AceCount;
          LODWORD(v24) = 4 * Src[1] + 8;
          memcpy(p_AceCount, Src, v24);
          v20 = &p_AceCount[(unsigned __int8)(4 * (Src[1] + 2))];
          LODWORD(v22) = 4 * v30[1] + 8;
          memcpy(v20, v30, v22);
          v21 = v30[1];
          v14 = (ACL *)&v20[4 * v21 + 8];
          v26->AclSize = 4 * (v21 + Src[1] + 7);
          v26->AclRevision = 4;
          *(_WORD *)&v26[1].AclRevision = 1;
          v17 = v7[1];
        }
        else
        {
          LODWORD(v24) = v7[1];
          memcpy(v14, v7, v24);
          v14 = (ACL *)((char *)v14 + v7[1]);
          v17 = v7[1];
        }
        v15 = *(unsigned __int16 *)(a1 + 4);
        v7 = (unsigned __int16 *)((char *)v7 + v17);
        ++v28;
      }
      while ( v28 < v15 );
    }
    v25->AceCount = v15;
  }
  else
  {
    *a5 = 0;
    *a4 = 0;
  }
  return 0;
}
