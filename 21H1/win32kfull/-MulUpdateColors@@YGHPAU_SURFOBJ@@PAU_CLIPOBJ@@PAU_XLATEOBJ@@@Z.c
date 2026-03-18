/*
 * XREFs of ?MulUpdateColors@@YGHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_XLATEOBJ@@@Z @ 0x205367
 * Callers:
 *     _NtGdiUpdateColors@4 @ 0x21EB48 (_NtGdiUpdateColors@4.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _OffCopyBits@36 @ 0x22EF0F (_OffCopyBits@36.c)
 */

int __userpurge MulUpdateColors@<eax>(
        struct _CLIPOBJ *a1@<edx>,
        int a2@<ecx>,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _XLATEOBJ *a5)
{
  int v6; // edx
  int **v7; // eax
  int *i; // ebx
  RECTL *p_rclBounds; // edi
  int v10; // eax
  int result; // eax
  int left; // [esp+14h] [ebp-38h] BYREF
  LONG top; // [esp+18h] [ebp-34h]
  struct _CLIPOBJ *v14; // [esp+1Ch] [ebp-30h]
  int v15; // [esp+20h] [ebp-2Ch]
  RECTL rclBounds; // [esp+24h] [ebp-28h] BYREF
  struct _RECTL v17; // [esp+34h] [ebp-18h] BYREF

  left = 0;
  memset(&v17, 0, sizeof(v17));
  top = 0;
  v6 = 1;
  v14 = a1;
  v15 = 1;
  v7 = *(int ***)(a2 + 8);
  rclBounds = a1->rclBounds;
  for ( i = *v7; i; i = (int *)*i )
  {
    if ( (*(_DWORD *)(i[9] + 1456) & 0x100) != 0 )
    {
      if ( bIntersect(&rclBounds, (const struct _RECTL *)(i + 5), &v17) )
      {
        left = v17.left;
        p_rclBounds = &v14->rclBounds;
        top = v17.top;
        v14->rclBounds.left = v17.left;
        p_rclBounds = (RECTL *)((char *)p_rclBounds + 4);
        p_rclBounds->left = v17.top;
        p_rclBounds = (RECTL *)((char *)p_rclBounds + 4);
        p_rclBounds->left = v17.right;
        p_rclBounds->top = v17.bottom;
        v10 = OffCopyBits(i[11], (int)(i + 12), i[11], v14, (int)a3, (int)&v17, (int)&left);
        v6 = v10 & v15;
        v15 &= v10;
      }
      else
      {
        v6 = v15;
      }
    }
  }
  result = v6;
  v14->rclBounds = rclBounds;
  return result;
}
